#include <Arduino.h>
#include "Buzzer.hpp"

Buzzer::Buzzer(int b) : Actionneur(b) {
}

void Buzzer::activer() {
    etat = true;
    digitalWrite(broche, HIGH);
}

void Buzzer::desactiver() {
    etat = false;
    digitalWrite(broche, LOW);
}

void Buzzer::bip(int duree) {
    activer();
    delay(duree);
    desactiver();
}

void Buzzer::signal(int nbBips, int duree, int pause) {
    for(int i = 0; i < nbBips; i++) {
        activer();
        delay(duree);
        desactiver();
        if(i < nbBips - 1) {
            delay(pause);
        }
    }
}

Buzzer::~Buzzer() {
    desactiver();
}