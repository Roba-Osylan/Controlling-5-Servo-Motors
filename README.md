# Controlling-5-Servo-Motors
This repository contains the files of the first task which is Controlling Servo Motors. The task is divided into three parts:
Part 1: Design an electronic circuit that controls 5 servo motors using Arduino.
Part 2: Program the servos to rotate with 90 degrees.
Part 3: Add potentiometers to control each servo (optional).

# Part 1: Circuit Connections 
As shown in the Picture below, this simple circuit controls 5 servo motors. The model of the hardware servo that will be used is MG995.
![Servos Circuit](https://user-images.githubusercontent.com/85955049/122106912-2da69080-ce23-11eb-8cd3-57340170ff72.png)

Components used:
-Arduino Uno R3.
-Breadboard.
-5 Micro Servos.
-Jumber Wires.
Note: An external 5V or 6V battery should be used to power all servos when making this project with hardware components.

Connections:
-The Signal Pins (PWM) of servos 1, 2, 3, 4 and 5 are connected to the digital pins of the Arduino 10, 9, 6, 5 and 3 respectively.
-The 5V pin of the Arduino is connected to the breadboard with the power pins of all servos.
-The Ground pin the Arduino is connected to the breadboard with the Ground pins of all servos.

# Part 2: Code
The simple code (Controlling_5_Servos) used to control the servos by first including the servo.h library and then by defining the pins and initializing the servos by using the .attach() function. Finally, a loop() will start to rotate the servos to 90 degree, then wait a 1.5s before rotating to 0 degree (back to the initial point).
