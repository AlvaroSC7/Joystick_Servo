#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos=255/2;    // variable to store the servo position
int Joystick=A0;
int JoystickValue;
int pwmValue;
int aux=0;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
Serial.begin(9600);
}

void loop() {
if(aux==0)
{
  myservo.write(pos);
  delay(25);
  aux++;
}
JoystickValue=analogRead(Joystick);
pos=JoystickValue/4;
myservo.write(pos);
delay(25);
Serial.println(pos);
}

