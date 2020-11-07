#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  // put your setup code here, to run once:
    lcd.init();
    lcd.backlight();
    }

void loop() {
  // put your main code here, to run repeatedly:
   lcd.clear();
    for (byte i= 0; i < 15; i++)
    {
      lcd.setCursor(3,0);
      lcd.print("Hi there");
      lcd.setCursor(15 - i, 1);
      lcd.print("Arduino Team");
      delay(1000);
    }
}
