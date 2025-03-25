// C++ code
//

#define SERVO 13
#include <Servo.h>

Servo myServo;

void setup()
{
  myServo.attach(SERVO);
}

void loop()
{
  for(int i = 0; i<=180; i++) myServo.write(i);
  for(int j = 180; j>=1; j--) myServo.write(j); 
}