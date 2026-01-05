#ifndef _plante_hpp
#define _plante_hpp

#include <Arduino.h>
#include <string>
#include "CapteurTemperature.hpp"


class Plante {

protected :

  static int Compteur;
  static int point_de_vie; 
  static int dureeArrosage; 
  

  public :

  Plante();

  ~Plante();

  virtual void Caracteristiques()=0;
  virtual int TempsDePousse()=0;
  virtual int GetDureeArrosage()=0;  
  virtual float GetSeuilArrosage()=0; 

  int GetCompteur ();

  void ModifPointDeVie(CapteurTemperature &capteur);

};




#endif
