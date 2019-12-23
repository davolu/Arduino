/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
*/
int LED = 2;
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);     
}

void loop() {
 
  digitalWrite(LED, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(LED, LOW);    // set the LED off
  delay(1000);              // wait for a second
  
}
