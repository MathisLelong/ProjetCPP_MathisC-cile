#ifndef _Arrosage_hpp
#define _Arrosage_hpp
#include <Arduino.h>
#include <string.h>
#include "CapteurTactile.hpp"
#include "Led.hpp"
#include "Buzzer.hpp"

class Arrosage {

  protected : 

  CapteurTactile& CT; 
  Led& led; 
  bool ModeAuto;
  bool DernierEtat;

  public : 

  Arrosage(Led& l, CapteurTactile& c);

  void ChangerModeArrosage();  
    
  ~Arrosage(); 

};


#endif