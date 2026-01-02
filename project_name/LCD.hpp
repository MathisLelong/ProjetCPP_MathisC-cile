#ifndef LCD_HPP
#define LCD_HPP

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>  

class LCD {
public:
    // Constructeur
    LCD();

    // Initialise l'écran
    void init();

    // Affiche un message simple
    void afficherMessage(const String& message);

    // Affiche la température
    void afficherTemperature(float temperature);

    // Efface l'écran
    void clear();

private:
    Adafruit_LiquidCrystal _lcd; // objet LCD
};

#endif
