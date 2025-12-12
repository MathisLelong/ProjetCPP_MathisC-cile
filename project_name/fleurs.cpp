#include <iostream>
#include <string.h>
#include "fleurs.hpp"

using namespace std ;

Fleurs::Fleurs(string n):Plante(){

  printf("Fleur créée");
  nom = n;

}

void Fleurs::Caracteristiques(){

  cout << nom << endl; 

}

Fleurs::~Fleurs(){

}
 
