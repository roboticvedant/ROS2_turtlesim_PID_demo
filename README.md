# ROS 2 Turtlesim PID Controller

This ROS 2 Python node controls a turtle in the `turtlesim` simulator to drive it to a desired position using a PID controller. Currently, PID constants are utilized for both distance and heading error.

## Features

- Retrieves the current pose of the turtle.
- Computes the error in distance and heading to the desired position.
- Uses a simple proportional controller to compute the required linear and angular velocities.
- Publishes these velocities to command the turtle.

## Prerequisites

- ROS 2 (Humble,Foxy, Galactic, or later versions recommended).
- `turtlesim` package.

## Usage

1. Ensure you have ROS 2 and `turtlesim` installed.

2. Clone this repository:

```bash
git clone https://github.com/roboticvedant/ROS2_turtlesim_PID_demo.git
cd ROS2_turtlesim_PID_demo
```

3. Source your ROS 2 installation:

```bash
source /opt/ros/[YOUR_ROS2_DISTRO]/setup.bash
```

4. Build the service package first, source it and then build the main turtle_demo_controller package:

```bash
colcon build --packages-select turtlebot_serv
```

```bash
source install/setup.bash
colcon build --packages-select turtle_demo_controller
```

5. Source the built package:

```bash
source install/setup.bash
```

6. Run the `turtlesim` node:

```bash
ros2 run turtlesim turtlesim_node
```

7. In a new terminal, run the controller:

```bash
ros2 run turtle_demo_controller turt_controller
```
8. In a new terminal tab, run the service call to give custom goal:

```bash
ros2 service call /goal_pose turtlebot_serv/srv/GoalPose "{x: 9, y: 9}"
```

## PID Control

This code uses Proportional Integral Derivative Controller to control the turtlebot.

## Future Enhancements

- Incorporate full PID control for both distance and heading error.
- Add dynamic reconfiguration to adjust PID constants on-the-fly.

## Contribute

Feel free to fork, open issues, and submit pull requests. Any contributions are welcome!
