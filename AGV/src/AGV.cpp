#include <Arduino.h>
#include "AGV.h"

#define MR_IN1 12 //motor1
#define MR_IN2 13 //motor1
#define MR_IN3 32 //motor2
#define MR_IN4 33 //motor2

#define ML_IN1 27 //motor4
#define ML_IN2 14 //motor4
#define ML_IN3 25 //motor3
#define ML_IN4 26 //motor3

#define R_ENA 15  //Adjust speed  //motor1
#define R_ENB 2   //Adjust speed //motor2
#define L_ENA 19  //Adjust speed //motor4
#define L_ENB 4   //Adjust speed //motor3

#define LED_R 16
#define LED_L 17

void AGV::pinsetup(){
    pinMode(MR_IN1, OUTPUT);
    pinMode(MR_IN2, OUTPUT);
    pinMode(MR_IN3, OUTPUT);
    pinMode(MR_IN4, OUTPUT);

    pinMode(ML_IN1, OUTPUT);
    pinMode(ML_IN2, OUTPUT);
    pinMode(ML_IN3, OUTPUT);
    pinMode(ML_IN4, OUTPUT);

    pinMode(R_ENA, OUTPUT);
    pinMode(R_ENB, OUTPUT);
    pinMode(L_ENA, OUTPUT);
    pinMode(L_ENB, OUTPUT);

    pinMode(LED_R, OUTPUT);
    pinMode(LED_L, OUTPUT);

}

void AGV::forward(int d){
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_L, HIGH);
  
  analogWrite(L_ENA, 200); //130-255
  analogWrite(L_ENB, 200);
  analogWrite(R_ENA, 200);
  analogWrite(R_ENB, 200);

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2

  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}

void AGV::backward(int d){
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_L, HIGH);
  
  analogWrite(L_ENA, 200); //130-255
  analogWrite(L_ENB, 200);
  analogWrite(R_ENA, 200);
  analogWrite(R_ENB, 200);

  digitalWrite(MR_IN1, 0);  //motor1
  digitalWrite(MR_IN2, 1);   //motor1
  digitalWrite(MR_IN3, 0);  //motor2
  digitalWrite(MR_IN4, 1);   //motor2

  digitalWrite(ML_IN3, 0);  //motor3
  digitalWrite(ML_IN4, 1);   //motor3
  digitalWrite(ML_IN1, 0);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}
