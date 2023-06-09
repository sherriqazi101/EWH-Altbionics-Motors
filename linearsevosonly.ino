#include <Servo.h>
#include<math.h>
#include "EncoderStepCounter.h"

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

#define SERVO_PIN_1 5
#define SERVO_PIN_2 6
#define SERVO_PIN_3 9
#define SERVO_PIN_4 10

#define MOTOR_AIN1 2
#define MOTOR_AIN2 4
#define MOTOR_BIN1 7
#define MOTOR_BIN2 8



int angle = 0;
void setup() {
  // put your setup code here, to run once:
    servo1.attach(SERVO_PIN_1);
    servo2.attach(SERVO_PIN_2);
    servo3.attach(SERVO_PIN_3);
    servo4.attach(SERVO_PIN_4);

    servo1.writeMicroseconds(angle);
    servo2.writeMicroseconds(angle);
    servo3.writeMicroseconds(angle);
    servo4.writeMicroseconds(angle);
    delay(100);

    pinMode(MOTOR_AIN1,OUTPUT);
    pinMode(MOTOR_AIN2,OUTPUT);
    pinMode(MOTOR_BIN1,OUTPUT);
    pinMode(MOTOR_BIN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (angle = 0; angle <= 180; angle += 1) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    delay(15);
  }

  for (angle = 180; angle >= 0; angle -= 1) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    delay(15);
  }
  delay(1000);
  /*
  digitalWrite(MOTOR_AIN1,LOW); 
  digitalWrite(MOTOR_AIN2,HIGH);
   delay(1000);
  digitalWrite(MOTOR_AIN1,HIGH); 
 digitalWrite(MOTOR_AIN2,LOW);

 digitalWrite(MOTOR_BIN1,LOW); 
 digitalWrite(MOTOR_BIN2,HIGH);
  delay(1000);
 digitalWrite(MOTOR_BIN1,HIGH); 
 digitalWrite(MOTOR_BIN2,LOW);
*/

}

