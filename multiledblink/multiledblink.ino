void setup() {
//multiple led blink one by one

int i;
   for(i=0; i<3; i++)
   {
     pinMode( (12-i), OUTPUT);
   }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int i;
   for(i=0; i<3; i++)
   {
    digitalWrite((12-i),HIGH);
    delay(1000);
    digitalWrite( (12-i),LOW);

    
   }

}
