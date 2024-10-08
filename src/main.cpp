


// rafaelhjj
// Parsa
//adriana
#include <Arduino.h>

// put function declarations here:
int sumFunction(int x, int y);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  // task is to multiply 2 numbers
}

//asks for 2 numbers and calculates the sum
int sumFunction(int x, int y) {
  if (Serial.available() > 0)
  {
    Serial.println("Print x: ");
    x = Serial.parseInt();
    Serial.println("Print y: ");
    y = Serial.parseInt();
  }
  return x + y;
}