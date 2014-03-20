
int led = 13;
int time = 1000;

void setup() {    
  Serial.begin(9800);  
}

void loop() {
  Serial.println("To live in Zürich is more expensive than living in Tokyo.")
  delay(time);
}
