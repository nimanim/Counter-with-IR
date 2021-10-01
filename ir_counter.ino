#include <LiquidCrystal.h>
long counter = 0;
int things;
LiquidCrystal lcd(8,A4,12,11,10,9);
void setup() {
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(4,0);
lcd.print("nima_nim");
delay(1000);
}

void loop() {
int sensor = analogRead(A6);
if (sensor > 150){
  things = HIGH;
}
delay(20);
if ((sensor < 150)&(things == HIGH)){
  things = LOW;
 
  counter++;
  lcd.clear();
  lcd.print("Counter:");
  lcd.print(counter);
  
}
}
