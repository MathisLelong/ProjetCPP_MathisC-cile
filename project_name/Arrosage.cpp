#include "Arrosage.hpp" 

Arrosage::Arrosage(Led& l, CapteurTactile& c, Buzzer& b, CapteurTemperature& T): led(l), CT(c), buzz(b), Temp(T), planteIndex(0), enCours(false){
}

void Arrosage::ArroserPlante() {
        if (!ModeAuto || plantes.empty()) return;

        unsigned long now = millis();

        if (!enCours) {
            // trouver la prochaine plante qui nécessite arrosage
            while (planteIndex < plantes.size() &&
                   !Temp.NecessiteArrosage(plantes[planteIndex]->GetSeuilArrosage())) {
                planteIndex++;
            }

            if (planteIndex < plantes.size()) {
                // commencer l'arrosage
                enCours = true;
                debutArrosage = now;
                dureeArrosage = plantes[planteIndex]->GetDureeArrosage();
                buzz.Activer();
            } else {
                // toutes les plantes ont été arrosées
                planteIndex = 0; // ou arrêter ModeAuto selon le besoin
            }
        } else {
            // vérifier si l'arrosage est terminé
            if (now - debutArrosage >= dureeArrosage) {
                buzz.Desactiver();
                enCours = false;
                planteIndex++; // passer à la plante suivante au prochain appel
            }
        }
    }
 
  void Arrosage::ChangerModeArrosage(){

     bool EtatActuel = CT.LireEtat(); 
    
    if (EtatActuel && !DernierEtat){
      ModeAuto=!ModeAuto; 
      if (!ModeAuto)
      led.Desactiver(); 
     else
      led.Activer();
    }
   

    DernierEtat=EtatActuel;

  }

  void Arrosage::AjouterPlante(Plante* plante) {
    plantes.push_back(plante);
}
    
 Arrosage::~Arrosage(){}