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

## Why i chose to do this project?

I chose to do this project because i really loved rc cars and i promissed to me that one day i will build one myself. I started with lego tehnic but it couldn't move on its own so i moved on with lego pieces that could move on their own but i still couldn't make a car that i could program it myself. One christmas it all changed because my parents got me a arduino kit and i started learnig how to use it even tough it was a knockof and it didnt have good instructions i used chatgpt as a teacher and slowly i started to like robotics a lot and after i finished with the lessons and it came time to build more complex projects i chose this one. Now this is the closest i have gotten to compliting my dream of building a rc car even though the motors dont have enough power to move all at the same time or move the car on the ground. I hope that anyone that reads this will get inspired and starts following their dreams even if it takes 10 years.
