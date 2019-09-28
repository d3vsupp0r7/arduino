/*
 * Example 2 - Blink
 * Turns on an LED on for one second, then off for one second, repeatedly.
 */
     
//Declare the pin the LED is connected to
int led = 13;
     
void setup() {                
  // Declare the LED as an output
  pinMode(led, OUTPUT);     
}
     
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
