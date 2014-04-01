
void setup() {
  Serial.begin(9600);
}

void loop(){
  
  Serial.write(0xFE); // special command
  Serial.write(0x01); // clear
  int value = analogRead(A0) /4;
  Serial.print("Sensor Val:");
  Serial.print(value);
  delay(100);
}
