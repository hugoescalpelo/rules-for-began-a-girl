//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display


int WAIT = 10000;
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  
}


void loop()
{
  for (int i = 0; i < WAIT/2; i++){
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("No entiendo por que ");
    lcd.setCursor(0,1);
    lcd.print("las mujeres estan   ");
    lcd.setCursor(0,2);
    lcd.print("tan obsesionadas con");
    lcd.setCursor(0,3);
    lcd.print("casarse.            ");
    delay (100);
    i = i+99;
  }
  for (int i = 0; i < WAIT/2; i++){
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("Somos solteras y    ");
    lcd.setCursor(0,1);
    lcd.print("fabulosas.          ");
    lcd.setCursor(0,2);
    lcd.print("                    ");
    lcd.setCursor(0,3);
    lcd.print("                    ");
    delay (100);
    i = i+99;
  }
  for (int i = 0; i < WAIT; i++){
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("Tal vez debes dejar ");
    lcd.setCursor(0,1);
    lcd.print("ir lo que eres, para");
    lcd.setCursor(0,2);
    lcd.print("convertirte en lo   ");
    lcd.setCursor(0,3);
    lcd.print("que seras.          ");
    delay (100);
    i = i+99;
  }
  
}
