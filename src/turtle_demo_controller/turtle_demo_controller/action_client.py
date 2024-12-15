#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from cpp_node.action import GoToPose


class GoToPoseClient(Node):
    def __init__(self):
        super().__init__('goto_pose_client')
        self._action_client = ActionClient(self, GoToPose, 'GoToPose')

    def send_goal(self, x, y):
        self._action_client.wait_for_server()
        # Create a goal message
        goal_msg = GoToPose.Goal()
        goal_msg.desired_x_pos = x
        goal_msg.desired_y_pos = y

        self.get_logger().info(f'Sending goal: x={x}, y={y}')
        # Send the goal
        
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        self.goal_handle:ClientGoalHandle = future.result()
        if self.goal_handle.accepted:
            self.get_logger().info('Goal accepted :)')
            self.goal_handle.get_result_async().add_done_callback(self.get_result_callback)
            



    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info("Result "+str(result.sucess))
        

    def feedback_callback(self, feedback_msg):
        x_feedback = feedback_msg.feedback.current_x_pos
        y_feedback = feedback_msg.feedback.current_y_pos
        self.get_logger().info("Result -current-x-pos"+ str(result.current_x_pos)+ "Result -current-y-pos" + str(result.current_y_pos))


def main(args=None):
    rclpy.init(args=args)
    client = GoToPoseClient()
    client.send_goal(9.0, 9.0)  # Send the desired goal
    rclpy.spin(client)


if __name__ == '__main__':
    main()
