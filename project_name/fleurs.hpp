#ifndef _fleurs_hpp
#define _fleurs_hpp
using namespace std;
#include "plante.hpp"
#include <string>



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
