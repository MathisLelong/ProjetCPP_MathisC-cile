#ifndef _CapteurTemperature_hpp
#define _CapteurTemperature_hpp

#include "Capteur.hpp"

using namespace std;

class CapteurTemperature : public Capteur {

  protected : 

  float Temperature; 

  public : 
    CapteurTemperature(int b); 

    void AfficheTemperature();

  ~CapteurTemperature(); 

};


#endif
