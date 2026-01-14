#ifndef JARDIN_HPP
#define JARDIN_HPP

#include <vector>
#include <Arduino.h>
#include "Plante.hpp"
#include "Rose.hpp"
#include "Tulipe.hpp"
#include "Poireau.hpp"
#include "Citrouille.hpp"
#include "CapteurTemperature.hpp"
#include "LCD.hpp"
#include "Led.hpp"
#include "CapteurTactile.hpp"
#include "Buzzer.hpp"
#include "BoutonPoussoir.hpp"
#include "Arrosage.hpp"

class Jardin {
private:
    // Capteurs et actionneurs
    CapteurTemperature temp;
    LCD lcd;
    Led led;
    CapteurTactile ct;
    Buzzer buzz;
    BoutonPoussoir bp;   // bouton pour navigation menu 

    // Plantes
    std::vector<Plante*> plantes;

    // Arrosage
    Arrosage arroser;

    // Timers
    unsigned long derniereMiseAJourPlantes;
    const unsigned long intervalMiseAJourPlantes = 30000; // 30s

public:
    Jardin();

    void init();
    void run();

    // Ajouter une plante au jardin
    void AjouterPlante(Plante* plante) {
        plantes.push_back(plante);
        arroser.AjouterPlante(plante);
    }
};

#endif