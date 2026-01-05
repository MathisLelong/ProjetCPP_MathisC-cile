#ifndef _Arrosage_hpp
#define _Arrosage_hpp
#include <Arduino.h>
#include <string.h>
#include "CapteurTactile.hpp"
#include "Led.hpp"
#include "Buzzer.hpp"
#include "CapteurTemperature.hpp"
#include <vector>
#include "plante.hpp"

class Arrosage {

  protected : 

  CapteurTactile& CT; 
  Led& led; 
  Buzzer& buzz;
  CapteurTemperature& Temp;
  std::vector<Plante*> plantes; 
  
  bool ModeAuto;
  bool DernierEtat;

  public : 

  void ArroserPlante();
  Arrosage(Led& l, CapteurTactile& c, Buzzer& b, CapteurTemperature& T);

  void ChangerModeArrosage();  

  void AjouterPlante(Plante* plante);
    
  ~Arrosage(); 

};


#endif