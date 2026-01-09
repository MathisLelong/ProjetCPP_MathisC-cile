#include <iostream>
#include <string.h>
#include "citrouille.hpp"

using namespace std ;

Citrouille::Citrouille(int d,string n):Legume(){

  printf("Citrouille crée");
  diametre=d;
  nom=n;

}

void Citrouille::Caracteristiques(){

  cout << diametre << endl ;
  
}

int Citrouille::TempsDePousse(){

  return(40);

}


string Citrouille::getname(){

  return nom;

}


int Citrouille::getdiam(){

  return diametre;

}



Citrouille& operator+ ( Citrouille& c1, Citrouille& c2){
  int newd;
  string newname;
  newd=((c2.getdiam())+(c1.getdiam()))/2;
  newname="bébé";
  static Citrouille c3(newd,newname);
  return c3;

}

Citrouille::~Citrouille(){}

