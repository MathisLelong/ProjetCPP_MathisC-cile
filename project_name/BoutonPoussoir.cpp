#include "BoutonPoussoir.hpp"

BoutonPoussoir::BoutonPoussoir(int b):Capteur(b){
  pinMode(BROCHE_BP, INPUT);
}


bool BoutonPoussoir::LireEtat(){
  return digitalRead(BROCHE_BP)==HIGH;
  
}


BoutonPoussoir::~BoutonPoussoir(){

}
