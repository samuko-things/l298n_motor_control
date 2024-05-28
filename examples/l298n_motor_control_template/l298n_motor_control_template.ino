#include "l298n_motor_control.h"

// motor A H-Bridge Connection
int IN1 = 7, IN2 = 8, enA = 5;
L298NMotorControl motorA(IN1, IN2, enA);

// motor B H-Bridge Connection
int IN3 = 11, IN4 = 12, enB = 6;
L298NMotorControl motorB(IN3, IN4, enB);




void setup() {
  Serial.begin(115200);
  
  /* motor needs no initialization as it is already initialized above*/

}


void loop() {

  // you can send negative and positive PWM values from -255 t0 +255

  // forward
  motorA.sendPWM(120);
  motorB.sendPWM(120);

  delay(5000); 

  // reverse
  motorA.sendPWM(-120);
  motorB.sendPWM(-120);

  delay(5000);

}


