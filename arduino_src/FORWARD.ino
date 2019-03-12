#include<AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
//AF_DCMotor motor3(3);
//AF_DCMotor motor4(4);

void setup() {
// put your setup code here, to run once:
motor1.setSpeed(0);
motor2.setSpeed(0);
//motor3.setSpeed(20);
//motor4.setSpeed(20);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.run(FORWARD);
motor2.run(FORWARD);
//motor3.run(FORWARD);
//motor4.run(FORWARD);
}
