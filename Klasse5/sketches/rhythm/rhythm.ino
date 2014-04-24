#include <TimerOne.h>

int speakerPin = 13;
int switchState = 0;
int interval = 50;
int rhythms[] = {2,1,1,1,2,1,3,1,2,2};
int rindex = 0;

void setup() 
{
  pinMode(13, OUTPUT); 
  Timer1.initialize(1000000); // 100000 usec = 100 msec = 0.2 sec
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
  Timer1.setPeriod(200000 * rhythms[rindex]);
  rindex++;
  rindex %= 10;
}

