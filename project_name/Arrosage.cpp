#include "Arrosage.hpp" 

Arrosage::Arrosage(Led& l, CapteurTactile& c, Buzzer& b, CapteurTemperature& T): led(l), CT(c), buzz(b), Temp(T){
}

void Arrosage::ArroserPlante(){

  if (ModeAuto){

    for (Plante* plante : plantes) {
        if (Temp.necessiteArrosage(plante->GetSeuilArrosage())) {
            buzz.activer();
            delay(plante->GetDureeArrosage());
            buzz.desactiver();
        }
    }
  }
}
 
  void Arrosage::ChangerModeArrosage(){

     bool EtatActuel = CT.LireEtat(); 
    
    if (EtatActuel && !DernierEtat){
      ModeAuto=!ModeAuto; 
      if (!ModeAuto)
      led.desactiver(); 
     else
      led.activer();
    }
   

    DernierEtat=EtatActuel;

  }

  void Arrosage::AjouterPlante(Plante* plante) {
    plantes.push_back(plante);
}
    
 Arrosage::~Arrosage(){}