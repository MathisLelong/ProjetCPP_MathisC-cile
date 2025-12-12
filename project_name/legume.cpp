#include <iostream>
#include <string.h>
#include "Legume.hpp"

using namespace std ;

Legume::Legume(string e):Plante(){

  printf("Legume crée");

  espece=e;


}


void Legume::caracteristiques(){

  cout<< espece << endl;

}


Legume::~Legume(){


}
