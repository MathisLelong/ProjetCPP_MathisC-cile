#ifndef _BoutonPoussoir_hpp
#define _BoutonPoussoir_hpp
#include <Arduino.h>
#include <string.h>
#include "Capteur.hpp"

#define BROCHE_BP D3

class BoutonPoussoir : public Capteur {

  protected : 


  public : 

    BoutonPoussoir(int b ); 

    bool LireEtat(); 
   
  ~BoutonPoussoir(); 

};


#endif