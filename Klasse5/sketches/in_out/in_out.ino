int sensorPin = 0; 
int ledPin = 3;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  analogWrite(ledPin, analogRead(sensorPin));
}

