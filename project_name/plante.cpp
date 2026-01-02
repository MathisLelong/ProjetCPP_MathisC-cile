#include "plante.hpp"

Plante::Plante(){

  Compteur++;

}

Plante::~Plante(){

}


int Plante::Compteur=0;
int Plante::point_de_vie=5; 

int Plante::GetCompteur(){

  return Compteur;

}

void Plante::ModifPointDeVie(CapteurTemperature &capteurhum) {
    if (capteurhum.lireValeurhum() < 39) {
        point_de_vie -= 2;
        if (point_de_vie < 0) {
          point_de_vie = 0;
          Serial.print("Plante Morte"); }
    else if (capteurhum.lireValeurhum() > 39){
        point_de_vie += 2;
    }
    }
}
    
