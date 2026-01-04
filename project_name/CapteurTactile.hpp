#ifndef _CapteurTactile_hpp
#define _CapteurTactile_hpp
#include <Arduino.h>
#include <string.h>
#include "Capteur.hpp"

#define BROCHE_CT D7

class CapteurTactile : public Capteur {

  protected :  
  
  public : 

    CapteurTactile(int b);

    bool LireEtat();

  ~CapteurTactile(); 

};


#endif