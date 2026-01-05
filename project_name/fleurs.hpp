#ifndef _fleurs_hpp
#define _fleurs_hpp

#include "plante.hpp"
#include <string.h>



class Fleurs: public Plante{

protected :

  String nom;
  String couleur;  
 
public :

  Fleurs(String nom, String couleur, int dureeArrosage);

 String Caracteristiques();
 
  ~Fleurs(); 

};


#endif
