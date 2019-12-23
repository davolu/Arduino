/*
  Button Controlled LED
  Turns on an LED when push the button.
*/

void setup() {
  // put your setup code here, to run once:
     pinMode(2, INPUT_PULLUP); 
     pinMode(12, OUTPUT); 
  
}

void loop() {
  // put your main code here, to run repeatedly:
    int buttonPushed = digitalRead(2);
    if(buttonPushed)
    {
      Serial.print("button on");
      digitalWrite(12, HIGH);   // set the LED on
      
    }
      else
      {
      digitalWrite(12, LOW);    // set the LED off
    }


}
