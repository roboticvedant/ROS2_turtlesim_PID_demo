#!/usr/bin/env python3
import rclpy
import math
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from cpp_node.action import GoToPose
from rclpy.action import ActionServer,GoalResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.callback_groups import ReentrantCallbackGroup
class Controller_Node(Node):
    def __init__(self):
        super().__init__('turt_controller')
        self.get_logger().info("Node Started")
        

        #self.desired_x = 9.0  # Adjust as needed
        #self.desired_y = 9.0  # Adjust as needed
        self.desired_x = 5.544
        self.desired_y = 5.544
        self.err_dist = 0
        self.err_theta = 0
        self.callback_group = ReentrantCallbackGroup()
        
        

      

        # Publisher and Subscriber
        
        self.my_vel_command = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self._action_server = ActionServer(
            self,
            GoToPose,
            'GoToPose',
            callback_group=self.callback_group,
            goal_callback = self.goal_callback,
            execute_callback = self.execute_callback)

    def goal_callback(self,goal_request:GoToPose.Goal):
        self.get_logger().info('Received a goal...')
        return GoalResponse.ACCEPT

    def execute_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info('Executing goal...')
        self.goal_handle = goal_handle
        self.desired_x = goal_handle.request.desired_x_pos  # Adjust as needed
        self.desired_y = goal_handle.request.desired_y_pos
        self.my_pose_sub = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10,callback_group=self.callback_group)
                # Start monitoring with a timer

        self.goal_timer = self.create_timer(
            0.1,  # Check every 100ms
            self.check_goal_reached
        )

        self.result = GoToPose.Result()
        
        
 
        # # Return result only after goal completion
        # while rclpy.ok():
        #     if self.result.sucess:
        
        
        return self.result

    # def check_goal_reached(self):
    #     """Check if the goal is reached and stop the timer if completed."""
    #     if self.err_dist < 0.1 and abs(self.err_theta) < 0.08:
    #         self.get_logger().info('Goal completed successfully...')
    #         self.result.sucess = True
    #         self.goal_handle.succeed()

    #         # Stop the timer to avoid redundant checks
    #         self.goal_timer.cancel()

    def check_goal_reached(self):
        try:
            if self.err_dist < 0.1 and abs(self.err_theta) < 0.08:
                self.get_logger().info('Goal reached successfully!')
                self.result.sucess = True
                self.goal_handle.succeed()
                self.goal_timer.cancel()
            else:
                self.get_logger().info('Goal not yet reached...')
        except Exception as e:
            self.get_logger().error(f"Error in check_goal_reached: {e}")
            self.goal_handle.abort()

    

        # Publisher and Subscriber
        #self.my_pose_sub = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)

    def pose_callback(self, msg: Pose):
        #self.get_logger().info(f"Current x={msg.x} current y={msg.y} and current angle = {msg.theta}")
       
        integral_dist = 0.0
        previous_err_dist = 0.0
        integral_theta = 0.0
        previous_err_theta = 0.0
        # Calculate errors in position
        Feedback = GoToPose.Feedback()
        Feedback.current_x_pos = msg.x
        Feedback.current_y_pos = msg.y
        self.goal_handle.publish_feedback(Feedback)
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
        
        
        
        integral_dist +=self.err_dist
        derivative_dist =self.err_dist - previous_err_dist
        integral_theta += self.err_theta
        derivative_theta = self.err_theta - previous_err_theta
        

        # TODO: Add integral and derivative calculations for complete PID

        # PID control for linear velocity
        #l_v = Kp_dist * abs(err_x) # + Ki_dist * integral_dist + Kd_dist * derivative_dist
        if self.err_dist >= 0.1: #checking whether error distance within tolerence
            l_v = Kp_dist * abs(self.err_dist) + Ki_dist * integral_dist + Kd_dist * derivative_dist
            previous_err_dist =self.err_dist
        else:
            self.get_logger().info(f"Turtlesim  stopping goal distance within tolerence")
            l_v = 0.0    


        # PID control for angular velocity
        if self.err_theta >=0.08: #checking whether heading angle error within tolerence
            a_v = Kp_theta * self.err_theta + Ki_theta * integral_theta + Kd_theta * derivative_theta
            previous_err_theta = self.err_theta
            
        else:
            self.get_logger().info(f"Turtlesim  stopping goal heading within tolerence")
            a_v = 0.0      
        # if self.err_dist < 0.1 and abs(self.err_theta) < 0.08:
        #     self.get_logger().info('COmpleted goal...')
        #     self.result.sucess = True 
        #     self.goal_handle.succeed()
        # Send the velocities
        self.my_velocity_cont(l_v, a_v)

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