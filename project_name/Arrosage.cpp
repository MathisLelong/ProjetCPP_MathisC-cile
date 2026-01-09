#include "Arrosage.hpp" 

Arrosage::Arrosage(Led& l, CapteurTactile& c, Buzzer& b, CapteurTemperature& T): led(l), CT(c), buzz(b), Temp(T), planteIndex(0), enCours(false), ModeAuto(false){
}

void Arrosage::ArroserPlante() {
    if (!ModeAuto || plantes.empty()) return;

    unsigned long now = millis();
    const unsigned long intervallePause = 60000; // 1 minute entre cycles
    const unsigned long delaiEntrePlantes = 1000; // 1 seconde entre plantes

    static unsigned long dernierCycle = 0;
    static unsigned long finDernierArrosage = 0;

    // Pause après un cycle complet
    if (!enCours && (now - dernierCycle < intervallePause) && planteIndex == 0) {
        return;
    }

    if (!enCours) {
        // On attend le petit délai entre plantes si ce n'est pas le premier arrosage du cycle
        if (planteIndex != 0 && now - finDernierArrosage < delaiEntrePlantes) {
            return;
        }

        // trouver la prochaine plante qui nécessite arrosage
        while (planteIndex < plantes.size() &&
               !Temp.NecessiteArrosage(plantes[planteIndex]->GetSeuilArrosage())) {
            planteIndex++;
        }

        if (planteIndex < plantes.size()) {
            // démarrer l'arrosage
            enCours = true;
            debutArrosage = now;
            dureeArrosage = plantes[planteIndex]->GetDureeArrosage();
            buzz.Activer();
        } else {
            // fin du cycle complet
            planteIndex = 0;
            dernierCycle = now; // démarrer la pause de 1 minute
        }
    } else {
        // vérifier si l'arrosage est terminé
        if (now - debutArrosage >= dureeArrosage) {
            buzz.Desactiver();
            enCours = false;
            finDernierArrosage = now; // pour le délai entre plantes
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