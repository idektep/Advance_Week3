#include <Arduino.h>
#include "AGV.h"

// put function declarations here:

AGV agv;

void setup() {
  // put your setup code here, to run once:
  agv.pinsetup();
}

void loop() {
  // put your main code here, to run repeatedly:
  agv.forward(1000);
}

// put function definitions here: