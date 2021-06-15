#include <Servo.h> //include the servo library 
//Define the pins of each servo
#define pinServo1 3
#define pinServo2 5
#define pinServo3 6
#define pinServo4 9
#define pinServo5 10

//Create servo objects
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

void setup() {
  //attach each servo with its defined pin
  Servo1.attach(pinServo1);
  Servo2.attach(pinServo2);
  Servo3.attach(pinServo3);
  Servo4.attach(pinServo4);
  Servo5.attach(pinServo5);
}

void loop() {
  
  //Rotate the servos with 90 degrees
  Servo1.write(90);
  Servo2.write(90);
  Servo3.write(90);
  Servo4.write(90);
  Servo5.write(90);
  delay(1500); //wait for 1.5 s
  //Rotate the servos with 0 degree (back to the initial point)
  Servo1.write(0);
  Servo2.write(0);
  Servo3.write(0);
  Servo4.write(0);
  Servo5.write(0);
  delay(1500); //wait for 1.5 s and repeat
  
}
