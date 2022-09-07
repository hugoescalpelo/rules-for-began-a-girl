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
  for (int i = 0; i < WAIT; i++){
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("Las relaciones no   ");
    lcd.setCursor(0,1);
    lcd.print("son juegos, son     ");
    lcd.setCursor(0,2);
    lcd.print("sobre madura y      ");
    lcd.setCursor(0,3);
    lcd.print("honesta comunicacion");
    delay (100);
    i = i+99;
  }
  for (int i = 0; i < WAIT/2; i++){
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("No deberiamos       ");
    lcd.setCursor(0,1);
    lcd.print("esperar que un      ");
    lcd.setCursor(0,2);
    lcd.print("hombre nos de todo  ");
    lcd.setCursor(0,3);
    lcd.print("                    ");
    delay (100);
    i = i+99;
  }
  for (int i = 0; i < WAIT/2; i++){
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("cada persona nos    ");
    lcd.setCursor(0,1);
    lcd.print("ofrece algo distinto");
    lcd.setCursor(0,2);
    lcd.print("                    ");
    lcd.setCursor(0,3);
    lcd.print("                    ");
    delay (100);
    i = i+99;
  }
  
}
