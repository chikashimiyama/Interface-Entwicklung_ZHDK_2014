int speakerPin = 13;
int switchState = 0;
int interval = 1000;

void setup() {
  pinMode(speakerPin, OUTPUT); 
  digitalWrite(2 , HIGH); // pull up
  attachInterrupt(0, intterupted, FALLING); // 0 = PIN2, 1 = PIN3
}
 
void loop(){ 
  digitalWrite(speakerPin, 1); 
  delayMicroseconds(interval);
  digitalWrite(speakerPin, 0); 
  delayMicroseconds(interval);
}

void intterupted(){
  interval = 1000000 / random(220,440) / 2;
}

