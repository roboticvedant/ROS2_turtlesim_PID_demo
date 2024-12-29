#!/usr/bin/env python3

# Import necessary modules from ROS 2 Python API
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from cpp_node.action import GoToPose  # Import custom action message GoToPose from cpp_node


class GoToPoseClient(Node):
    def __init__(self):
        # Initialize the ROS 2 node with the name 'goto_pose_client'
        super().__init__('goto_pose_client')

        # Create an ActionClient for the GoToPose action server
        self._action_client = ActionClient(self, GoToPose, 'GoToPose')

    def send_goal(self, x, y):
        # Wait for the action server to be available
        self._action_client.wait_for_server()

        # Create a goal message to send to the action server
        goal_msg = GoToPose.Goal()
        goal_msg.desired_x_pos = x  # Set desired x position
        goal_msg.desired_y_pos = y  # Set desired y position

        # Log the goal message being sent
        self.get_logger().info(f'Sending goal: x={x}, y={y}')

        # Send the goal asynchronously and add a callback for feedback
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)
        
        # Add a done callback to handle the result after goal is accepted
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        # Callback function to handle the result of the goal response
        self.goal_handle: ClientGoalHandle = future.result()  # Get the goal handle from the future result
        if self.goal_handle.accepted:
            # If the goal was accepted, log the success and wait for the result
            self.get_logger().info('Goal accepted :)')
            self.goal_handle.get_result_async().add_done_callback(self.get_result_callback)
        else:
            # If the goal was rejected, log the rejection
            self.get_logger().info('Goal rejected :(')

    def get_result_callback(self, future):
        # Callback function to handle the final result of the goal execution
        result = future.result().result  # Get the result of the goal
        self.get_logger().info("Result " + str(result.sucess))  # Log the result of the goal execution
        self.get_logger().info('Reached Goal :)')
    def feedback_callback(self, feedback_msg):
        # Callback function to handle feedback messages during goal execution
        x_feedback = feedback_msg.feedback.current_x_pos  # Get the current x position from feedback
        y_feedback = feedback_msg.feedback.current_y_pos  # Get the current y position from feedback
        # Log the received feedback
        self.get_logger().info(f"Feedback received - Current X Position: {x_feedback}, Current Y Position: {y_feedback}")


def main(args=None):
    # Initialize the ROS 2 Python client library
    rclpy.init(args=args)

    # Create an instance of the GoToPoseClient node
    client = GoToPoseClient()
    
    # Prompt user for X and Y input
    x = float(input("Enter the desired X position: "))
    y = float(input("Enter the desired Y position: "))

    # Send the user-specified goal
    client.send_goal(x, y)

    # Keep the node running and processing callbacks
    rclpy.spin(client)


if __name__ == '__main__':
    # Call the main function when the script is executed
    main()


