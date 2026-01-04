#include "Arrosage.hpp" 


Arrosage::Arrosage(Led& l, CapteurTactile& c): led(l), CT(c){
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
    
 Arrosage::~Arrosage(){}