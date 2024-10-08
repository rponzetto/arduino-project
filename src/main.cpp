


// rafaelhjj
// Parsa
//adriana
#include <Arduino.h>

// Parsa
//adriana
#include <Arduino.h>

// put function declarations here:
int SumFunction(int x, int y);
int multiFunction(int a, int b);
#define LED_PIN 10 

void setup() {
  // put your setup code here, to run once:
  int result = SumFunction(2, 3);
  int result2 = multiFunction(2, 3);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH); // Turn the LED on 
  delay(1000);                 // Wait for 1 second
  digitalWrite(LED_PIN, LOW);  // Turn the LED off 
  delay(1000);
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
  int multiFunction(int a, int b) {
  if (Serial.available() > 0)
  {
    Serial.println("Print a: ");
    a = Serial.parseInt();
    Serial.println("Print b; ");
    b = Serial.parseInt();
  }
  return a * b;
}