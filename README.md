# Battle Robot Carbide

This GitHub repository contains the code and documentation for Battle Robot Carbide, which was developed for a competition. Carbide is a formidable battle robot equipped with a differential steering system, two motors controlled by a Flysky Remote Controller, and additional components for weapon control. The robot utilizes an Arduino Uno, an L298 motor driver, a relay, a remote controller receiver, and a Li-Po battery for power.

## Robot Specifications

- Differential Steering: Carbide utilizes a differential steering system, allowing precise control and maneuverability during battles.
- Motor Control: Two motors are used for driving the robot, controlled by a Flysky Remote Controller. The controller provides directional control and speed adjustments.
- Weapon Blade: Carbide features a third motor that controls a weapon blade, adding offensive capabilities to the robot.
- Remote Controller Receiver: A remote controller receiver is connected to the Arduino Uno to receive commands from the Flysky Remote Controller. The receiver allows Carbide to listen and perform commands sent by the remote controller.
- Arduino Uno: The Arduino Uno microcontroller board is the brain of Carbide, responsible for motor control, communication with the remote controller, coordination of the weapon blade, and processing commands received from the remote controller receiver.
- L298 Motor Driver: The L298 motor driver is used to interface the Arduino Uno with the two driving motors, providing the necessary power and control signals.
- Relay: A relay is incorporated into the system to control the weapon blade motor. It allows the Arduino Uno to switch the motor on or off, providing precise control during battles.
- Li-Po Battery: A Li-Po (Lithium Polymer) battery is used to power the entire system, providing the necessary voltage and current for the motors, Arduino Uno, and other components.

## Operation

Carbide operates as follows:

1. Motor Control: The Flysky Remote Controller sends commands to the remote controller receiver, which forwards the commands to the Arduino Uno. The Arduino Uno interprets these commands and controls the two driving motors accordingly, enabling forward, backward, left, and right movement as per the remote controller inputs.
2. Weapon Control: The Arduino Uno receives commands from the remote controller receiver or other sensors and triggers the relay to activate or deactivate the weapon blade motor. This coordination allows the weapon blade to be turned on or off as desired, providing offensive capabilities during battles.
3. Differential Steering: Carbide's differential steering system ensures precise maneuverability. By independently controlling the speed and direction of each driving motor, the robot can execute various turns, spins, and maneuvers to outmaneuver opponents in battle.

## Code

The code in this repository contains the necessary programming logic for controlling the battle robot Carbide. It includes functionality for receiving and interpreting commands from the Flysky Remote Controller via the remote controller receiver, coordinating motor control for the driving motors, and managing the activation and deactivation of the weapon blade motor using the relay.
