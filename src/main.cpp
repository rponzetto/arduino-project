


// rafaelhjj
// Parsa
//adriana
#include <Arduino.h>

// put function declarations here:
int SumFunction(int x, int y);
#define LED_PIN 10 

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  int result = SumFunction(2, 3);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int N1, N2; // Declare integers
  int result;

  Serial.print("Enter the first number: ");
  N1 = GetIntNumber();  // Call custom function to get an integer
  Serial.println(N1);   // Display first number

  Serial.print("Enter the second number: ");
  N2 = GetIntNumber();  // Call custom function to get an integer
  Serial.println(N2);   // Display second number

  result = N1 * N2;  // Multiply the two numbers
  Serial.print("\nResult = "); // Heading
  Serial.println(result);      // Display result
  delay(500);
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH); // Turn the LED on 
  delay(1000);                 // Wait for 1 second
  digitalWrite(LED_PIN, LOW);  // Turn the LED off 
  delay(1000);
}

// Function to read an integer from the Serial Monitor
int GetIntNumber() {
  while (Serial.available() == 0);  // Wait for input
  return Serial.parseInt();         // Parse and return the integer
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