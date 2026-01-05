#include "BoutonPoussoir.hpp"

BoutonPoussoir::BoutonPoussoir(int b):Capteur(b){
  pinMode(broche, INPUT);
}


bool BoutonPoussoir::LireEtat(){
  return digitalRead(broche)==HIGH;
  
}


BoutonPoussoir::~BoutonPoussoir(){

}
