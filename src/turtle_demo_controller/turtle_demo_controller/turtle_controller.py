#!/usr/bin/env python3

# Importing required modules
import rclpy  # ROS 2 Python client library
import math  # For mathematical calculations
from rclpy.node import Node  # Base class for ROS 2 nodes
from geometry_msgs.msg import Twist  # Message type for velocity commands
from turtlesim.msg import Pose  # Message type for turtlesim's pose
from cpp_node.action import GoToPose  # Custom action for GoToPose
from rclpy.action import ActionServer, GoalResponse  # ROS 2 Action Server utilities
from rclpy.action.server import ServerGoalHandle  # Goal handle for the action server
from rclpy.callback_groups import ReentrantCallbackGroup  # To allow concurrent callbacks

# Define the main controller node class
class Controller_Node(Node):
    def __init__(self):
        super().__init__('turt_controller')  # Initialize the node with a name
        self.get_logger().info("Node Started")  # Log node initialization

        # Desired position for the turtle
        self.desired_x = 5.544
        self.desired_y = 5.544

        # Initialize error variables
        self.err_dist = 0
        self.err_theta = 0

        # Use a ReentrantCallbackGroup to allow concurrent callback execution
        self.callback_group = ReentrantCallbackGroup()
        self.goal_completed = False  # Flag to track goal completion

        # Publisher for sending velocity commands
        self.my_vel_command = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)

        # Action server setup for the GoToPose action
        self._action_server = ActionServer(
            self,
            GoToPose,  # Action type
            'GoToPose',  # Action name
            callback_group=self.callback_group,
            goal_callback=self.goal_callback,  # Callback when a goal is received
            execute_callback=self.execute_callback  # Callback to execute the goal
        )

    # Callback to handle incoming goals
    def goal_callback(self, goal_request: GoToPose.Goal):
        self.get_logger().info('Received a goal...')
        # Check if the absolute values of x and y are less than or equal to 11
        if abs(goal_request.desired_x_pos) <= 11 and abs(goal_request.desired_y_pos) <= 11:
            self.get_logger().info(f"Goal accepted with x: {goal_request.desired_x_pos}, y: {goal_request.desired_y_pos}")
            return GoalResponse.ACCEPT  # Accept the goal
        else:
            self.get_logger().info(f"Goal rejected with x: {goal_request.desired_x_pos}, y: {goal_request.desired_y_pos}")
            return GoalResponse.REJECT  # Reject the goal

    # Callback to execute the goal
    def execute_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info('Executing goal...')
        self.goal_handle = goal_handle  # Store the goal handle

        # Update desired position based on goal
        self.desired_x = goal_handle.request.desired_x_pos
        self.desired_y = goal_handle.request.desired_y_pos

        # Subscribe to the pose topic to get feedback on turtle's position
        self.my_pose_sub = self.create_subscription(
            Pose, "/turtle1/pose", self.pose_callback, 10, callback_group=self.callback_group)

        # Initialize result object for the action
        self.result = GoToPose.Result()

        try:
            # Create a periodic timer to check if the goal is reached
            self.goal_timer = self.create_timer(0.1, self.check_goal_reached)

            # Spin the node to handle other callbacks while the goal is active
            while not self.goal_handle.is_cancel_requested:
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.goal_completed:  # Exit if goal is completed
                    break

        except Exception as e:
            # Handle exceptions during goal execution
            self.get_logger().error(f"Error during goal execution: {e}")
            self.goal_handle.abort()  # Abort the goal
            self.result.sucess = False

        # Return the result object
        return self.result

    # Periodic callback to check if the goal is reached
    def check_goal_reached(self):
        # Check if the position and heading errors are within tolerances
        if self.err_dist < 0.1 and abs(self.err_theta) < 0.08:
            self.get_logger().info("Goal reached successfully!")
            self.result.sucess = True
            self.goal_handle.succeed()  # Mark the goal as succeeded
            self.goal_timer.cancel()  # Stop the periodic checks
            self.goal_completed = True
        else:
            self.get_logger().info("Still moving towards the goal...")

    # Callback to process turtle's pose and compute control commands
    def pose_callback(self, msg: Pose):
        # Publish feedback for the action
        Feedback = GoToPose.Feedback()
        Feedback.current_x_pos = msg.x
        Feedback.current_y_pos = msg.y
        self.goal_handle.publish_feedback(Feedback)

        # Calculate positional errors
        err_x = self.desired_x - msg.x
        err_y = self.desired_y - msg.y
        self.err_dist = math.sqrt(err_x**2 + err_y**2)

        # Calculate heading error
        desired_theta = math.atan2(err_y, err_x)
        self.err_theta = desired_theta - msg.theta

        # Wrap heading error within [-pi, pi]
        while self.err_theta > math.pi:
            self.err_theta -= 2.0 * math.pi
        while self.err_theta < -math.pi:
            self.err_theta += 2.0 * math.pi

        # PID gains for distance and heading control
        Kp_dist, Ki_dist, Kd_dist = 0.4, 0.1, 0.08
        Kp_theta, Ki_theta, Kd_theta = 2, 0.1, 0.01

        # Initialize integral and derivative terms
        integral_dist = 0.0
        previous_err_dist = 0.0
        integral_theta = 0.0
        previous_err_theta = 0.0

        # PID control for linear velocity
        if self.err_dist >= 0.1:
            l_v = Kp_dist * abs(self.err_dist) + Ki_dist * integral_dist + Kd_dist * (self.err_dist - previous_err_dist)
            previous_err_dist = self.err_dist
        else:
            self.get_logger().info(f"Turtlesim stopping as goal distance is within tolerance")
            l_v = 0.0

        # PID control for angular velocity
        if abs(self.err_theta) >= 0.08:
            a_v = Kp_theta * self.err_theta + Ki_theta * integral_theta + Kd_theta * (self.err_theta - previous_err_theta)
            previous_err_theta = self.err_theta
        else:
            self.get_logger().info(f"Turtlesim stopping as goal heading is within tolerance")
            a_v = 0.0

        # Send computed velocity commands
        self.my_velocity_cont(l_v, a_v)

    # Publish velocity commands to the topic
    def my_velocity_cont(self, l_v, a_v):
        my_msg = Twist()
        my_msg.linear.x = l_v  # Linear velocity
        my_msg.angular.z = a_v  # Angular velocity
        self.my_vel_command.publish(my_msg)  # Publish the message

# Entry point of the script
def main(args=None):
    rclpy.init(args=args)  # Initialize ROS 2
    node = Controller_Node()  # Create an instance of the node
    rclpy.spin(node)  # Keep the node running
    node.destroy_node()  # Destroy the node when done
    rclpy.shutdown()  # Shutdown ROS 2

# Run the script
if __name__ == '__main__':
    main()
