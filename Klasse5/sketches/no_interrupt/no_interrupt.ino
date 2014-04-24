int switchPin = 2;
int speakerPin = 13;
int interval = 1000;

void setup() 
{
  pinMode(speakerPin, OUTPUT); 
  digitalWrite(switchPin , HIGH); // pull up
}
 
void loop()
{
  if(digitalRead(switchPin) == 0){
    interval = 1000000 /  random(220, 440) / 2;
  }
  
  digitalWrite(speakerPin, 1); 
  delayMicroseconds(interval);
  digitalWrite(speakerPin, 0); 
  delayMicroseconds(interval); 
}


