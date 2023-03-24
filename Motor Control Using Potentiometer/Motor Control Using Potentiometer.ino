#include <Servo.h>  
  
Servo myservo;  
int ppin = A1;    
int value=0;     
  
void setup()   
{  
  myservo.attach(9);
}  
  
void loop()   
{  
  value = analogRead(ppin);              
  value = map(value, 0, 1023, 0, 180);         
  myservo.write(value);   
  delay(1000);     
  value = map(value, 1023, 0, 180, 0);  
  myservo.write(value);    
  delay(1000);                             
}  