#include <EEPROM.h>

void setup() {
  int value;
  Serial.begin(9600);

  value = EEPROM.read(0);
  Serial.println("Laaded value from EEPROM:");
  Serial.println(value);

  
  value = random(0, 255);
  Serial.print("New value to be stored in EEPROM:");
  Serial.println(value);
  EEPROM.write(0, value); 
}

void loop(){
  
}
