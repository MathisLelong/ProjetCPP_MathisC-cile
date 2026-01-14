#include <Arduino.h>
#include "citrouille.hpp"


Citrouille::Citrouille(int d,String n):Legume(){

  diametre=d;
  nom=n;

}

String Citrouille::Caracteristiques(){

  String s= nom + " " + String(diametre) ; 
  return s;
  
}

int Citrouille::TempsDePousse(){

  return(40);

}


String Citrouille::getname(){

  return nom;

}


int Citrouille::getdiam(){

  return diametre;

}



Citrouille& operator+ ( Citrouille& c1, Citrouille& c2){
  int newd;
  String newname;
  newd=((c2.getdiam())+(c1.getdiam()))/2;
  String n1=c1.getname();
  String n2=c2.getname();
  String prefix=n1.substring(0,3);
  String sufix=n2.substring(n2.length()-3);
  newname= prefix+sufix;
  static Citrouille c3(newd,newname);
  return c3;

}

int Citrouille::GetPointDeVie(){
    return point_de_vie; 
}

int Citrouille::GetDureeArrosage(){
    return 15000; 
}

float Citrouille::GetSeuilArrosage(){
    return 10.0; 
}


Citrouille::~Citrouille(){}

