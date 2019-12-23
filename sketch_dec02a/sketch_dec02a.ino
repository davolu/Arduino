 /*Note:This code is used for Arduino 1.0 or later*/

 #define LED 13
 
 
void setup() {
  
  /*put your setup code here, to run once:*/
  Serial.begin(9600);  //This is to set the serial port baud rate used to communicate with the computer(or other MCU that communicate with Arduino)

}

void loop() {
  
  /*put your main code here, to run repeatedly:*/
  Serial.println("Welcome to Arduino");
  Serial.println("Congratulations, you've done a great job!");
  while(1);
  
}
