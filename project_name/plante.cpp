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
    if (capteurhum.lireValeurhum() < 25) {
        point_de_vie -= 1;
        if (point_de_vie < 0) {
          point_de_vie = 0;
          Serial.print("Plante Morte"); }
    else if (capteurhum.lireValeurhum() > 50){
        point_de_vie += 1;
    }
    }
}
    
