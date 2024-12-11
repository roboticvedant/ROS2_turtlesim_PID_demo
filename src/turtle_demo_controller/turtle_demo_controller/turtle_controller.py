#!/usr/bin/env python3
import rclpy
import math
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from cpp_node.action import GoToPose
from rclpy.action import ActionServer

class Controller_Node(Node):
    def __init__(self):
        super().__init__('turt_controller')
        self.get_logger().info("Node Started")
        # PID controller variables
        self.integral_dist = 0.0
        self.previous_err_dist = 0.0
        self.integral_theta = 0.0
        self.previous_err_theta = 0.0
        self.l_v= 0.0
        self.a_v = 0.0
        self.err_dist = 0.1
        self.err_theta = 0.08

        self.goal_handle = None
        self.my_vel_command = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.my_pose_sub = None
        self._action_server = ActionServer(
            self,
            GoToPose,
            'GoToPose',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        self.goal_handle = goal_handle

        self.desired_x = goal_handle.request.desired_x_pos  # Adjust as needed
        self.desired_y = goal_handle.request.desired_y_pos

        # Publisher and Subscriber
        self.my_pose_sub = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        
        self.result = GoToPose.Result()
        if self.err_dist < 0.1 and abs(self.err_theta) < 0.08:
            self.get_logger().info('COmpleted goal...')
            self.result.result = True 
            self.goal_handle.succeed()
            
            self.result.result = True
        return self.result

      

    def pose_callback(self, msg: Pose):
        #self.get_logger().info(f"Current x={msg.x} current y={msg.y} and current angle = {msg.theta}")
       
        
        feedback_msg = GoToPose.Feedback()
        feedback_msg.current_x_pos = msg.x
        feedback_msg.current_y_pos = msg.y
        self.goal_handle.publish_feedback(feedback_msg)
        
        # Calculate errors in position
        err_x = self.desired_x - msg.x
        err_y = self.desired_y - msg.y
        self.err_dist = (err_x**2+err_y**2)**0.5
        
        # Distance error (magnitude of the error vector)
        
        #self.get_logger().info(f"Error in x {err_x} and error in y {err_y}")

        # Desired heading based on the position error
        desired_theta = math.atan2(err_y, err_x)
        
        # Error in heading
        self.err_theta = desired_theta - msg.theta
       
        # Handle wrap-around issues (e.g., if error jumps from +pi to -pi)
        while self.err_theta > math.pi:
           self.err_theta -= 2.0 * math.pi
        while self.err_theta < -math.pi:
           self.err_theta += 2.0 * math.pi
        #self.get_logger().info(f"Desired Angle = {desired_theta} current angle {msg.theta} Error angle {err_theta}")
        # P (ID not required) for linear velocity (distance control)

        Kp_dist = 0.4
        Ki_dist = 0.1
        Kd_dist = 0.08
        Kp_theta = 2
        Ki_theta = 0.1
        Kd_theta = 0.01
        
        
        
        self.integral_dist +=self.err_dist
        self.derivative_dist =self.err_dist - self.previous_err_dist
        self.integral_theta +=self.err_theta
        self.derivative_theta =self.err_theta - self.previous_err_theta
        

        # TODO: Add integral and derivative calculations for complete PID

        # PID control for linear velocity
        #self.l_v = Kp_dist * abs(err_x) # + Ki_dist * integral_dist + Kd_dist * derivative_dist
        if self.err_dist >= 0.1: #checking whether error distance within tolerence
            self.l_v = Kp_dist * abs(self.err_dist) + Ki_dist * self.integral_dist + Kd_dist * self.derivative_dist
            self.previous_err_dist =self.err_dist
        else:
            self.get_logger().info(f"Turtlesim  stopping goal distance within tolerence")
            self.l_v = 0.0    


        # PID control for angular velocity
        if self.err_theta >=0.08: #checking whether heading angle error within tolerence
            self.a_v = Kp_theta *self.err_theta + Ki_theta * self.integral_theta + Kd_theta * self.derivative_theta
            self.previous_err_theta =self.err_theta
            
        else:
            self.get_logger().info(f"Turtlesim  stopping goal heading within tolerence")
            self.a_v = 0.0      

      
            

        # Send the velocities
        self.my_velocity_cont(self.l_v, self.a_v)

    def my_velocity_cont(self, l_v, a_v):
        #self.get_logger().info(f"Commanding liner ={self.l_v} and angular ={self.a_v}")
        my_msg = Twist()
        my_msg.linear.x = self.l_v
        my_msg.angular.z = self.a_v
        self.my_vel_command.publish(my_msg)

def main(args=None):
    rclpy.init(args=args)
    node = Controller_Node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
