#include "LCD.hpp"

LCD::LCD()
    : _lcd(0,0x3E, 0x62)
{
}

void LCD::init() {
     Wire.begin(D1, D2);
    _lcd.begin(16, 2);         // LCD 16x2
    _lcd.setBacklight(HIGH);   // Allume rétroéclairage
    _lcd.clear();
    _lcd.setCursor(0, 0);
    _lcd.print("Demarrage...");
}

void LCD::afficherMessage(const String& message) {
    _lcd.clear();
    _lcd.setCursor(0, 0);
    _lcd.print(message);
}

void LCD::afficherTemperature(float temperature) {
    _lcd.clear();
    _lcd.setCursor(0, 0);
    _lcd.print("Temp: ");
    _lcd.print(temperature);
    _lcd.print((char)223); // ° symbole
    _lcd.print("C");
}

void LCD::clear() {
    _lcd.clear();
}
