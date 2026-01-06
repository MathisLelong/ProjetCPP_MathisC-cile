#include "plante.hpp"

Plante::Plante(){

  Compteur++;
  point_de_vie=5;
}

Plante::~Plante(){

}


int Plante::Compteur=0;
 

int Plante::GetCompteur(){

  return Compteur;

}

void Plante::ModifPointDeVie(CapteurTemperature &capteurhum) {
    if (capteurhum.LireValeurhum() < 35) {
        point_de_vie -= 1;
        if (point_de_vie < 0) {
          point_de_vie = 0;
          }}
    else if (capteurhum.LireValeurhum() > 50){
        point_de_vie += 1;
    }

}
    
