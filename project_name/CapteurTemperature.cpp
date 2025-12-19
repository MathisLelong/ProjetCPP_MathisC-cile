#include <iostream>
#include <string.h>
#include "CapteurTemperature.hpp"


using namespace std ;

CapteurTemperature::CapteurTemperature(int b): Capteur(b){    
}

void CapteurTemperature::AfficheTemperature(){
      printf("Temperature ") ; 
    }

CapteurTemperature::~CapteurTemperature(){


}

