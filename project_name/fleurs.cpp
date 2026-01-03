
#include <string.h>
#include "fleurs.hpp"



Fleurs::Fleurs(String n, String c, int dureeArrosage):Plante(){

  nom = n;
  couleur = c; 

}

void Fleurs::Caracteristiques(){

  Serial.print(nom); 
  Serial.print(couleur);

  
}

Fleurs::~Fleurs(){

}
 
