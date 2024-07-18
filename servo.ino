// C++ code
//
#include <Servo.h>

Servo myServo;
void setup()
{
  myServo.attach(2);
  myServo.write(0);
  delay(1000);
  myServo.write(50);
  delay(1000);
  myServo.write(180);
  delay(1000);
}

void loop()
{
    myServo.write(0);
    delay(100);
    myServo.write(180);
    delay(100);
}