
#include <SPI.h>

int dataInPin = 0;
int dataOutPin = 1;
int ssPin = 10;

void setup(){
  Serial.begin(9600);
  pinMode(ssPin, OUTPUT); 
  digitalWrite(ssPin, HIGH);
  SPI.begin();
  delay(100);
}

void loop(){
  char address = 0b110000; // start bit, single mode, channel 0
  char dummy = 0;
  char value;
  digitalWrite(ssPin, LOW);
  SPI.transfer(address);
  value = SPI.transfer(address);
  digitalWrite(ssPin, HIGH);
  
  Serial.write(value);
  delay(50);
}
