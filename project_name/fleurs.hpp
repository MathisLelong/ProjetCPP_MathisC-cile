#ifndef _fleurs_hpp
#define _fleurs_hpp

#include "plante.hpp"
#include <string.h>

using namespace std;

class Fleurs: public Plante{

protected :

  string nom;
  string couleur;  
 
public :

  Fleurs(string nom, string couleur);

  virtual void Caracteristiques();
 
  ~Fleurs(); 

};


#endif
