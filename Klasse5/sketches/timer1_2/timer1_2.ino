#include <TimerOne.h>
 
int speakerPin = 13;
int switchState = 0;
int interval = 50;

void setup() 
{
  pinMode(13, OUTPUT); 
  Timer1.initialize(1000000); // 1000000 usec = 1000 msec = 1 sec
  Timer1.attachInterrupt( randomize ); 
}
 
void loop()
{
  digitalWrite(speakerPin, 1); 
  delayMicroseconds(interval);
  digitalWrite(speakerPin, 0); 
  delayMicroseconds(interval); 
}

void randomize()
{
  interval = 1000000 /  random(220, 440) / 2;
}
