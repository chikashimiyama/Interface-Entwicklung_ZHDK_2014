#include <TimerOne.h>
 
int led = 0;

void setup(){
  pinMode(13, OUTPUT); 
  Timer1.initialize(500000); // 500000 usec = 500 msec = 0.5 sec
  Timer1.attachInterrupt( ledBlink );
}
 
void loop(){

}

void ledBlink(){
  if(led == 0){
    led = 1;
  }else{
    led = 0;
  }
  digitalWrite( 13, led );
}
