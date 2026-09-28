# Arduino Obstacle Avoiding Car

This is an Arduino Nano based obstacle-avoiding car.

The car uses an HC-SR04 ultrasonic sensor to detect obstacles. When an obstacle is closer than 20 cm, the Arduino changes the motors that are active to try to avoid it. An LED turns on when an obstacle is detected.

## Components

- Arduino Nano
- HC-SR04 ultrasonic sensor
- ULN2003 motor driver
- 4 DC motors
- LED
- Batteries
- 3D printed chassis

## Current limitation

The electronics, ultrasonic sensor, LED, and motors work correctly. However, the motors do not currently provide enough power/torque to move the complete car on the floor.

## Code

The Arduino code is included in this repository.
