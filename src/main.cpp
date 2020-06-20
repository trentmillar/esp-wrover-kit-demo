#include <Arduino.h>
 

void setup() {
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

bool blink = true;
void loop() {
  digitalWrite(0, !blink);
  digitalWrite(2, !blink);
  digitalWrite(4, !blink);
  delay(1000);
}