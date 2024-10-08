#include <Arduino.h>

// put function declarations here:
int SumFunction(int x, int y);

void setup() {
  // put your setup code here, to run once:
  int result = SumFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

//asks for 2 numbers and calculates the sum
int SumFunction(int x, int y) {
  if (Serial.available() > 0)
  {
    Serial.println("Print x: ");
    x = Serial.parseInt();
    Serial.println("Print y; ");
    y = Serial.parseInt();
  }
  return x + y;
}