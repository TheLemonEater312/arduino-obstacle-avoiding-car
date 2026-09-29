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

The motors work individually, but the current power setup cannot provide enough power to run all four motors reliably at the same time. The video demonstrates the ultrasonic sensor, LED indicator, and motor control logic.

## Code

The Arduino code is included in this repository.
