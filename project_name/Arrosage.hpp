/////////////////////CLASSE ARROSAGE////////////////////////////////////

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

  //ref vers capteurs
  CapteurTactile& CT; 
  Led& led; 
  Buzzer& buzz;
  CapteurTemperature& Temp;
  //vecteur de plantes
  std::vector<Plante*> plantes; 
  
  bool ModeAuto; //mode arrosage automatique
  bool DernierEtat; //dernier mode d'arrosage 

  public : 
 
 //Constructeur
  Arrosage(Led& l, CapteurTactile& c, Buzzer& b, CapteurTemperature& T);

// fonction qui arrose une plante selon sa durée d'arrosage 
  void ArroserPlante();

// fonction qui passe du mode d'arrosage automatique au mode d'arrosage manuel 
  void ChangerModeArrosage();  

//fonction qui ajoute une plante au jardin 
  void AjouterPlante(Plante* plante);
    
  //Destructeur
  ~Arrosage(); 

};


#endif