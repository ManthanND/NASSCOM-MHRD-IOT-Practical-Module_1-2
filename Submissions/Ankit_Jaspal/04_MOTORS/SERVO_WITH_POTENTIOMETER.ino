#include <Servo.h>       

Servo servo_test;    	
                
int angle = 0;    
const int pot= A0;  
const int servo=11;

 
void setup() 
 { 
  servo_test.attach(servo); 	
 } 
 
void loop() 
 { 
  angle = analogRead(pot);            
  angle = map(angle, 0, 1023, 0, 179);     
  servo_test.write(angle);                   
 }  
