


// rafaelhjj
// Parsa
//adriana
#include <Arduino.h>

void setup() {
  Serial.begin(9600);
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
}

// Function to read an integer from the Serial Monitor
int GetIntNumber() {
  while (Serial.available() == 0);  // Wait for input
  return Serial.parseInt();         // Parse and return the integer
}