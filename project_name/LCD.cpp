#include "LCD.hpp"


LCD::LCD(){
}

void LCD::init() { 
    lcd.begin(16, 2);         // LCD 16x2
    lcd.setRGB(colorR,colorG,colorB);
}

void LCD::afficherMessage(const String& message) {
    lcd.setCursor(0, 0);
    lcd.print(message);
}

void LCD::afficherTemperature(float temperature) {
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.print((char)223); // ° symbole
    lcd.print("C   ");
}

void LCD::afficherHumidite(float humidite) {
    lcd.setCursor(0, 0);
    lcd.print("Hum: ");
    lcd.print(humidite);
    lcd.print("%   "); 
    
}

void LCD::effacer() {
    lcd.clear();
}
