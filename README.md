# ROS 2 Turtlesim PID Controller With ACtion server and client

This ROS 2 Python node controls a turtle in the `turtlesim` simulator to drive it to a desired position using a PID controller. Currently, only the proportional (P),Integral (I) and Derivative(D) are utilized for both distance and heading error.

## Features
- Action server to receive client goal request.
- Goal validation with acceptance and rejection criteria.
- Continuous feedback provided to the client.
- Retrieves the current pose of the turtle.
- Computes the error in distance and heading to the desired position.
- Uses PID controller to compute the required linear and angular velocities.
- Publishes these velocities to command the turtle.

## Prerequisites

- ROS 2 (Humble,Foxy, Galactic, or later versions recommended).
- `turtlesim` package.

## Usage

1. Ensure you have ROS 2 and `turtlesim` installed.

2. Clone this repository:

```bash
git clone https://github.com/nivednivu1997/ROS2_turtlesim_PID_demo.git
cd ROS2_turtlesim_PID_demo
```

3. Source your ROS 2 installation:

```bash
source /opt/ros/[YOUR_ROS2_DISTRO]/setup.bash
```

4. Build the package:

```bash
colcon build --symlink-install
```

5. Source the built package:

```bash
source install/setup.bash
```

6. Run the `turtlesim` node:

```bash
ros2 run turtlesim turtlesim_node
```

7. In a new terminal, run the action server controller:

```bash
ros2 run turtle_demo_controller turt_controller
```

8. In a new terminal, run the action client:

```bash
ros2 run turtle_demo_controller client
```


## Configuration

You can adjust the desired x and y positions by modifying the x and y values in the client.send_goal(x, y) function call within the client script.

## PID Control

PID control is one of the most widely used feedback controllers in the industry. It combines three components:

1. **Proportional (P)**: The proportional term produces an output value that is proportional to the current error value. It determines the reaction based on the present error.

2. **Integral (I)**: The integral term concerns past values of error. If the error has been present for an extended period, it will accumulate (integral of the error), and the controller will respond by increasing (or decreasing) the control action in relation to a sustained error.

3. **Derivative (D)**: The derivative term is a prediction of future error. It provides a control action to counteract the rate of error change. 

The weighted sum of these three actions is used to adjust the process via a control element, such as the position of a control valve or the power supply of a heating element.

## Implementation

In the current implementation, the Proportional (P),Integral (I) and Derivative(D) control strategy is applied. 

## Future Enhancements

- Get user input for x and y positions 
- Convert script to cpp
- Add dynamic reconfiguration to adjust PID constants on-the-fly.

## Contribute

Feel free to fork, open issues, and submit pull requests. Any contributions are welcome!
