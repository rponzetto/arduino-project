


// rafaelhjj
// Parsa
//adriana
#include <Arduino.h>

// put function declarations here:
#define LED_PIN 10 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH); // Turn the LED on 
  delay(1000);                 // Wait for 1 second
  digitalWrite(LED_PIN, LOW);  // Turn the LED off 
  delay(1000);
}
