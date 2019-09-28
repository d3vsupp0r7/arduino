/* Example 1 - Led Turn on
 *  
 */
// the pin the LED is connected to
int led = 13; 

void setup() {
  // Declare the LED as an output
  pinMode(led, OUTPUT); 
}

void loop() {
   // Turn the LED on
  digitalWrite(led, HIGH); 
}
