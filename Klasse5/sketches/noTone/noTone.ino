#include <TimerOne.h>

int speakerPin = 13;
int switchState = 0;
int freq = 50;
int rhythms[] = {2,1,1,1,2,1,3,1,2,2};
int rindex = 0;
int pause = 0;

void setup() 
{
  pinMode(13, OUTPUT); 
  Timer1.initialize(1000000); // 100000 usec = 100 msec = 0.2 sec
  Timer1.attachInterrupt( randomize ); 

}
 
void loop()
{
  if(pause == 0){
    tone(speakerPin,freq );
  }else{
    noTone(speakerPin);
  }
}

void randomize()
{
  freq = random(220, 440);
  Timer1.setPeriod(200000 * rhythms[rindex]);
  rindex++;
  rindex %= 10;
  if(random(100) > 20){
    pause = 0;
  }else{
    pause = 1;
  }
}

