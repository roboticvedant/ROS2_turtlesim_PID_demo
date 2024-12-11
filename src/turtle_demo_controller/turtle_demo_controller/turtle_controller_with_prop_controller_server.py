#!/usr/bin/env python3
import rclpy
import math
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlebot_serv.srv import GoalPose
from turtlesim.msg import Pose
import time

class Controller_Node(Node):
    def __init__(self):
        super().__init__('turt_controller')
        self.get_logger().info("Node Started")
        

        self.serve1_ = self.create_service(GoalPose,"goal_pose", self.goalPoseCallback)
        self.desired_x = 5.54  # Adjust as needed
        self.desired_y = 5.54  # Adjust as needed
        self.current_x = 5.54
        self.current_y = 5.54   
        self.angle = 0   

        # Publisher and Subscriber
        self.my_pose_sub = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        self.my_vel_command = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)

        self.timer = self.create_timer(0.1, self.path_calculator)

    def goalPoseCallback(self, request, response):

        self.desired_x = request.x
        self.desired_y = request.y
        
        response.result = "Successfully sent the goal"
        return response

    def path_calculator(self):
        
        self.get_logger().debug(f"Current x={self.current_x} current y={self.current_y} and current angle = {self.angle}")
        
        err_x = self.desired_x - self.current_x
        err_y = self.desired_y - self.current_y
        err_dist = (err_x**2+err_y**2)**0.5
        
        # Distance error (magnitude of the error vector)
        
        self.get_logger().debug(f"Error in x {err_x} and error in y {err_y}")

        # Desired heading based on the position error
        desired_theta = math.atan2(err_y, err_x)
        
        # Error in heading
        err_theta = desired_theta - self.angle
       
        # Handle wrap-around issues (e.g., if error jumps from +pi to -pi)
        while err_theta > math.pi:
            err_theta -= 2.0 * math.pi
        while err_theta < -math.pi:
            err_theta += 2.0 * math.pi
        self.get_logger().debug(f"Desired Angle = {desired_theta} current angle {self.angle} Error angle {err_theta}")
        # P (ID not required) for linear velocity (distance control)

        Kp_dist = 0.4

        # P (ID not required) constants for angular velocity (heading control)
        Kp_theta = 2
        
        # TODO: Add integral and derivative calculations for complete PID

        #l_v = Kp_dist * abs(err_x) # + Ki_dist * integral_dist + Kd_dist * derivative_dist
        l_v = Kp_dist * abs(err_dist) # + Ki_dist * integral_dist + Kd_dist * derivative_dist


        # PID control for angular velocity
        a_v = Kp_theta * err_theta  

        # Send the velocities
        self.my_velocity_cont(l_v, a_v)

    def pose_callback(self, msg: Pose):
        #self.get_logger().info(f"Current x={msg.x} current y={msg.y} and current angle = {msg.theta}")
        
        self.current_x = msg.x
        self.current_y = msg.y
        self.angle = msg.theta
        #self.path_calculator()

    def my_velocity_cont(self, l_v, a_v):
        #self.get_logger().info(f"Commanding liner ={l_v} and angular ={a_v}")
        my_msg = Twist()
        my_msg.linear.x = l_v
        my_msg.angular.z = a_v
        self.my_vel_command.publish(my_msg)

def main(args=None):
    rclpy.init(args=args)
    node = Controller_Node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
