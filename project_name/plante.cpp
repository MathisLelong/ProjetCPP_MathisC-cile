#include <iostream>
#include <string>
#include "plante.hpp"

using namespace std ;

Plante::Plante(){

  printf("plante crée");
  Compteur++;


}

Plante::~Plante(){

}


int Plante::Compteur=0;

int Plante::GetCompteur(){

  return Compteur;

}
