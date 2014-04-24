int ledPin = 3; 
int brightness = 0;
int operand = 1;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  analogWrite(ledPin, brightness);
  brightness += operand;
  if(brightness >= 64){
    operand = -1;
  }else if(brightness <= 0){
    operand = 1; 
  }
  delay(10);
}

