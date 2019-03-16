#include <ros.h>
#include <std_msgs/String.h>
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

ros::NodeHandle nh;

char* msg;

void messageCallBack(const std_msgs::String& toggle_msg) {
    msg = (char*)toggle_msg.data;
}

ros::Subscriber<std_msgs::String> sub("/remote_control", &messageCallBack);

void setup(){
    nh.initNode();
    nh.subscribe(sub);
}

void loop(){
    nh.spinOnce();
    if(strcmp(msg, "RIGHT") == 0){
        motor1.run(FORWARD);
        motor2.run(FORWARD);
        motor1.setSpeed(10);
        motor2.setSpeed(50);
        delay(300);
    } else if (strcmp(msg, "LEFT") == 0) {
        motor1.run(FORWARD);
        motor2.run(FORWARD);
        motor1.setSpeed(50);
        motor2.setSpeed(10);
        delay(300);
    } else if (strcmp(msg, "FORWARD") == 0) {
        motor1.run(FORWARD);
        motor2.run(FORWARD);
        motor1.setSpeed(200);
        motor2.setSpeed(200);
        delay(300);
    } else if (strcmp(msg, "STOP") == 0){
        motor1.run(RELEASE);
        motor2.run(RELEASE);
        }
}
