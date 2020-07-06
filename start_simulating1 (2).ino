#include <Servo.h>


#define PINSERVO01 6
#define PINSERVO02 7

Servo Servo01;
Servo Servo02;

int tiempo=2000;



void setup()
{
  Servo01.attach(PINSERVO01);
  
  Servo02.attach(PINSERVO02);
  
}

void loop()
{
  Servo01.write(0);
  Servo02.write(0);
  delay(tiempo);
  Servo01.write(100);
  Servo02.write(100);
  delay(tiempo);
}
  
  
  