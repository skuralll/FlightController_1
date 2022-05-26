#include <Arduino.h>
#include "NJU7386RB1.hpp"

//25 26, 32, 33, 12 13, 14, 15, 0, 2
NJU7386RB1 motor_driver(0, 2);

void setup() {
  motor_driver.begin();
}

void loop() {
  motor_driver.set_speed(-255);
  delay(1000);
  motor_driver.set_speed(255);
  delay(1000);
}