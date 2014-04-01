
#include <LiquidCrystal.h>

LiquidCrystal lcd(5, 6, 7, 8, 9, 10, 11);

void setup() {
  lcd.begin(16, 2); 
}

void loop() {
  lcd.setCursor(0, 0);
  int value = analogRead(A0) /4;
  lcd.print(value);
  delay(100);
}

