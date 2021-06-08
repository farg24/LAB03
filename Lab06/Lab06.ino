#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

long valor;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  
}

void loop() {
  String unity = Serial.readString();
  lcd.clear();  
  valor = analogRead(A0);  
  lcd.setCursor(1,0);
  lcd.print(unity);  
  Serial.println(unity);
  delay(100);
  
}
