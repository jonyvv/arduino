#include <Servo.h>

Servo servo_5;

int pos = 0;

void setup()
{
  servo_5.attach(5, 500, 2500);

}

void loop()
{
  for (pos = 0; pos <= 180;pos += 1) {
    servo_5.write(pos);
    
  }
   delay(1000);
  for (pos = 180; pos >= 0;pos -= 1) {
    servo_5.write(pos);
    
   }
  delay(1000);
}
