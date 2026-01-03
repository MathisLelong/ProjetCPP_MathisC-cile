#ifndef LCD_HPP
#define LCD_HPP

#include <Arduino.h>
#include <Wire.h>
#include "rgb_lcd.h" 

class LCD {
public:
   
    LCD();

    // Initialise l'écran
    void init();

    // Affiche un message simple
    void afficherMessage(const String& message);

    // Affiche la température
    void afficherTemperature(float temperature);

    // Affiche l'humidité'
    void afficherHumidite(float humidite);

    // Efface l'écran
    void effacer();

protected:
    rgb_lcd lcd; // objet LCD
    const int colorR = 0; 
    const int colorG = 255; 
    const int colorB = 0; 
};

#endif
