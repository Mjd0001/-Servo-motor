#include <Servo.h>

Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int val1;  
int val2; 
int val3; 
int val4; 
int val5; 
int val6; 

void setup() {
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(12);
  servo6.attach(13);
  
}

void loop() {
  val1 = analogRead(A0);            
  val1 = map(val1, 0, 1023, 0, 180);    
  servo1.write(val1);
  
  val2 = analogRead(A1);            
  val2 = map(val2, 0, 1023, 0, 180);    
  servo2.write(val2);
  
  val3 = analogRead(A2);            
  val3 = map(val3, 0, 1023, 0, 180);    
  servo3.write(val3);
  
  val4 = analogRead(A3);            
  val4 = map(val4, 0, 1023, 0, 180);    
  servo4.write(val4);
  
  val5 = analogRead(A4);            
  val5 = map(val5, 0, 1023, 0, 180);    
  servo5.write(val5);
  
  
  val6 = analogRead(A5);            
  val6 = map(val6, 0, 1023, 0, 180);    
  servo6.write(val6);
  
  
  delay(15);                          
}