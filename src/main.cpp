#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello,World");
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}