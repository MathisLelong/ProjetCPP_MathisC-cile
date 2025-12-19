#include <iostream>
#include <string.h>
#include "fleurs.hpp"

using namespace std ;

Fleurs::Fleurs(string n, string c):Plante(){

  nom = n;
  couleur = c; 

}

void Fleurs::Caracteristiques(){

  cout << nom <<' '<< couleur << endl; 
  
}

Fleurs::~Fleurs(){

}
 
