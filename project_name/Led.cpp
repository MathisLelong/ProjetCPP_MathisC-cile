#include <Arduino.h>
#include "Led.hpp"

Led::Led(int b) : Actionneur(b) {
}

void Led::activer() {
    etat = true;
    digitalWrite(broche, HIGH);
}

void Led::desactiver() {
    etat = false;
    digitalWrite(broche, LOW);
}

void Led::toggle() {
    if (etat) {
        desactiver();
    } else {
        activer();
    }
}

Led::~Led() {
    desactiver();
}
