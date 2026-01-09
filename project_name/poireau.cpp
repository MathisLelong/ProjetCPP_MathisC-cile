#include <iostream>
#include <string.h>
#include "poireau.hpp"

using namespace std ;

Poireau::Poireau(int l,string n):Legume(){

  printf("Poireau crée");
  longueur=l;
  nom=n;

}

void Poireau::Caracteristiques(){

  cout << longueur << endl ;
  
}

int Poireau::TempsDePousse(){

  return(20);

}


string Poireau::getname(){

  return nom;

}


int Poireau::getlenght(){

  return longueur;

}



Poireau& operator+ ( Poireau& p1, Poireau& p2){
  int newl;
  string newname;
  newl=((p2.getlenght())+(p1.getlenght()))/2;
  newname="bébé";
  static Poireau p3(newl,newname);
  return p3;

}

Poireau::~Poireau(){}

