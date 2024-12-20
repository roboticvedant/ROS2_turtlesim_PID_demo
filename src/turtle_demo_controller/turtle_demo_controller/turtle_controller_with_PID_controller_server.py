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
        self.get_logger().info(f"Received new goal: {request.x} {request.y}")
        response.result = "Successfully sent the goal"
        return response

    def path_calculator(self):
        
        self.get_logger().debug(f"Current x={self.current_x} current y={self.current_y} and current angle = {self.angle}")
        
        integral_dist = 0.0
        previous_err_dist = 0.0
        integral_theta = 0.0
        previous_err_theta = 0.0

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
        
        # PID constants for linear velocity (distance control)

        Kp_dist = 0.2
        Ki_dist = 0.05
        Kd_dist = 0.02

        # PID constants for angular velocity (heading control)
        Kp_theta = 1.5
        Ki_theta = 0.18
        Kd_theta = 0.1
        max_integral = 1.0
        
        integral_dist = max(min(integral_dist, max_integral), -max_integral)
        integral_theta = max(min(integral_theta, max_integral), -max_integral)

        #integral_dist += err_dist
        derivative_dist = err_dist - previous_err_dist
        #integral_theta += err_theta
        derivative_theta = err_theta - previous_err_theta
        
        if abs(err_theta) > 0.08:
            # Turn until we are close enough to the desired angle
            a_v = Kp_theta * err_theta + Ki_theta * integral_theta + Kd_theta * derivative_theta

        else:
            a_v = 0

        if err_dist>0.05 or abs(err_theta)>0.05:
            l_v = Kp_dist * abs(err_dist) + Ki_dist * integral_dist + Kd_dist * derivative_dist
            previous_err_dist = err_dist

        else:
            self.get_logger().debug("Robot distance is within the goal tolerance")
            l_v = 0

        previous_err_theta = err_theta
        # Send the velocities
        self.my_velocity_cont(l_v, a_v)

    def pose_callback(self, msg: Pose):
        self.current_x = msg.x
        self.current_y = msg.y
        self.angle = msg.theta

    def my_velocity_cont(self, l_v, a_v):
        my_msg = Twist()
        my_msg.linear.x = float(l_v)
        my_msg.angular.z = float(a_v)
        self.my_vel_command.publish(my_msg)

def main(args=None):
    rclpy.init(args=args)
    node = Controller_Node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
