int switchPin = 2;
int speakerPin = 13;
int switchState = 0;
int interval = 1000;

void setup() 
{
  pinMode(speakerPin, OUTPUT); 
  digitalWrite(switchPin , HIGH); // pull up
}
 
void loop()
{
  if(digitalRead(switchPin) == 0){
    if(switchState == 0 ){
    interval = 1000000 /  random(220, 440) / 2;
    switchState = 1;
    }
  }else{
    switchState = 0; 
  }
  
  digitalWrite(speakerPin, 1); 
  delayMicroseconds(interval);
  digitalWrite(speakerPin, 0); 
  delayMicroseconds(interval);
}


