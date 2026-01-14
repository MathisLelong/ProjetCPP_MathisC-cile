/////////////////////CLASSE TULIPE////////////////////////////////////

#ifndef _Tulipe_hpp
#define _Tulipe_hpp

#include "fleurs.hpp"

class Tulipe: public Fleurs{

protected :


public :

  //Constructeur 
  Tulipe(String c);

  //fonction qui retourne le temps de pousse d'une rose 
  virtual int TempsDePousse(); 

  //fonction qui retourne les points de vie de la rose 
  int GetPointDeVie ();

   //fonction qui retourne la durée d'arrosage de la rose 
  int GetDureeArrosage();

  //fonction qui retourne le seuil d'humidité minimal d'une rose afin de pouvoir l'arroser 
  float GetSeuilArrosage();

  //Destructeur
  ~Tulipe(); 

};


#endif
