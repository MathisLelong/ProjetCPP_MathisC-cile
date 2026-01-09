#include "Jardin.hpp"
#include <Arduino.h>

Jardin::Jardin()
    : led(BROCHE_LED),
      ct(BROCHE_CT),
      buzz(BROCHE_BUZZER),
      bp(BROCHE_BP1),
      bpDemo(BROCHE_BP2), // broche libre pour le bouton de démo
      arroser(led, ct, buzz, temp),
      derniereMiseAJourPlantes(0)
{
    // Création des plantes de base
    Rose* rose1 = new Rose("rouge");
    Tulipe* tulipe1 = new Tulipe("bleue");
    Rose* rose2 = new Rose("blanche");
    Poireau* poireau1 = new Poireau(15, "Bernard");
    Citrouille* citrouille = new Citrouille(20,"Marie");
    Poireau* poireau2 = new Poireau(10, "Michelle");
    Poireau* poireau3 = new Poireau(*poireau1 + *poireau2);

    // Ajouter plantes au jardin
    AjouterPlante(rose1);
    AjouterPlante(tulipe1);
    AjouterPlante(rose2);
    AjouterPlante(poireau1);
    AjouterPlante(citrouille);
    AjouterPlante(poireau2);
    AjouterPlante(poireau3);
}

void Jardin::init() {
    Serial.begin(9600);
    lcd.Init();
    temp.Init();
}

void Jardin::run() {
    unsigned long now = millis();

    // Mise à jour PV des plantes
    if (now - derniereMiseAJourPlantes >= intervalMiseAJourPlantes) {
        for (auto& p : plantes) {
            p->ModifPointDeVie(temp);
        }
        derniereMiseAJourPlantes = now;
    }

    // Arrosage
    arroser.ChangerModeArrosage();
    arroser.ArroserPlante();

    // LCD
    lcd.GererMenuLCD(bp, temp, plantes);

    // --- Démo : ajout ponctuel d'une plante ---
// Commenter ou supprimer si pas de bouton
// static bool planteAjoutee = false;
// if (!planteAjoutee && bpDemo.AppuiDetecte()) {
//     Rose* roseDemo = new Rose("jaune");
//     roseDemo->SetSeuilHumidite(50, 65);
//     AjouterPlante(roseDemo);
//     planteAjoutee = true;
//     Serial.println("Nouvelle plante ajoutée pour la démo !");
// }

}
