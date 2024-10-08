// rafaelhjj
// Parsa
//adriana
#include <Arduino.h>

// Function declarations
int SumFunction();
int multiFunction();
#define LED_PIN 10 

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize LED pin
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // LED blink every second
  digitalWrite(LED_PIN, HIGH); // Turn the LED on
  delay(1000);                 // Wait for 1 second
  digitalWrite(LED_PIN, LOW);  // Turn the LED off
  delay(1000);

  // Call SumFunction
  int result = SumFunction();  // Get sum from user
  Serial.print("Sum Result: ");
  Serial.println(result);

  // Call multiFunction
  int result2 = multiFunction();  // Get product from user
  Serial.print("Multiplication Result: ");
  Serial.println(result2);

  delay(5000);  // Wait 5 seconds before the next interaction
}

// Function to ask for 2 numbers and calculate the sum
int SumFunction() {
  int x = 0, y = 0;
  
  Serial.println("Enter first number (for sum): ");
  while (Serial.available() == 0);  // Wait for input
  x = Serial.parseInt();            // Get the first number
  Serial.println(x);                // Echo the first number

  Serial.println("Enter second number (for sum): ");
  while (Serial.available() == 0);  // Wait for input
  y = Serial.parseInt();            // Get the second number
  Serial.println(y);                // Echo the second number

  return x + y;  // Return the sum
}

// Function to ask for 2 numbers and calculate the multiplication
int multiFunction() {
  int a = 0, b = 0;
  
  Serial.println("Enter first number (for multiplication): ");
  while (Serial.available() == 0);  // Wait for input
  a = Serial.parseInt();            // Get the first number
  Serial.println(a);                // Echo the first number

  Serial.println("Enter second number (for multiplication): ");
  while (Serial.available() == 0);  // Wait for input
  b = Serial.parseInt();            // Get the second number
  Serial.println(b);                // Echo the second number

  return a * b;  // Return the product
}
