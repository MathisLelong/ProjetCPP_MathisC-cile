#include "Arrosage.hpp" 

Arrosage::Arrosage(Led& l, CapteurTactile& c, Buzzer& b, CapteurTemperature& T): led(l), CT(c), buzz(b), Temp(T){
}

void Arrosage::ArroserPlante(){

  if (ModeAuto){

    for (Plante* plante : plantes) {
        if (Temp.NecessiteArrosage(plante->GetSeuilArrosage())) {
            buzz.Activer();
            delay(plante->GetDureeArrosage());
            buzz.Desactiver();
        }
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