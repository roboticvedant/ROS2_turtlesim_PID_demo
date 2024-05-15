#!/usr/bin/env python3
import rclpy
import math
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

class Controller_Node(Node):
    def __init__(self):
        super().__init__('turt_controller')
        self.get_logger().info("Node Started")
        

        self.desired_x = 9.0  # Adjust as needed
        self.desired_y = 9.0  # Adjust as needed
        

      

        # Publisher and Subscriber
        self.my_pose_sub = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        self.my_vel_command = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)

    def pose_callback(self, msg: Pose):
        #self.get_logger().info(f"Current x={msg.x} current y={msg.y} and current angle = {msg.theta}")
       
        integral_dist = 0.0
        previous_err_dist = 0.0
        integral_theta = 0.0
        previous_err_theta = 0.0
        # Calculate errors in position
        err_x = self.desired_x - msg.x
        err_y = self.desired_y - msg.y
        err_dist = (err_x**2+err_y**2)**0.5
        
        # Distance error (magnitude of the error vector)
        
        #self.get_logger().info(f"Error in x {err_x} and error in y {err_y}")

        # Desired heading based on the position error
        desired_theta = math.atan2(err_y, err_x)
        
        # Error in heading
        err_theta = desired_theta - msg.theta
       
        # Handle wrap-around issues (e.g., if error jumps from +pi to -pi)
        while err_theta > math.pi:
            err_theta -= 2.0 * math.pi
        while err_theta < -math.pi:
            err_theta += 2.0 * math.pi
        #self.get_logger().info(f"Desired Angle = {desired_theta} current angle {msg.theta} Error angle {err_theta}")
        # P (ID not required) for linear velocity (distance control)

        Kp_dist = 0.4
        Ki_dist = 0.1
        Kd_dist = 0.08
        Kp_theta = 2
        Ki_theta = 0.1
        Kd_theta = 0.01
        
        
        
        integral_dist += err_dist
        derivative_dist = err_dist - previous_err_dist
        integral_theta += err_theta
        derivative_theta = err_theta - previous_err_theta
        

        # TODO: Add integral and derivative calculations for complete PID

        # PID control for linear velocity
        #l_v = Kp_dist * abs(err_x) # + Ki_dist * integral_dist + Kd_dist * derivative_dist
        if err_dist >= 0.1: #checking whether error distance within tolerence
            l_v = Kp_dist * abs(err_dist) + Ki_dist * integral_dist + Kd_dist * derivative_dist
            previous_err_dist = err_dist
        else:
            self.get_logger().info(f"Turtlesim  stopping goal distance within tolerence")
            l_v = 0.0    


        # PID control for angular velocity
        if err_theta >=0.08: #checking whether heading angle error within tolerence
            a_v = Kp_theta * err_theta + Ki_theta * integral_theta + Kd_theta * derivative_theta
            previous_err_theta = err_theta
            
        else:
            self.get_logger().info(f"Turtlesim  stopping goal heading within tolerence")
            a_v = 0.0      

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
