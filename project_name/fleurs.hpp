#ifndef _fleurs_hpp
#define _fleurs_hpp

#include "plante.hpp"

using namespace std;

class Fleurs: public Plante{

protected :

  string nom;

public :
  Fleurs(string nom);
  virtual void Caracteristiques();

  ~Fleurs(); 

};


#endif
