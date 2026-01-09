#include <Arduino.h>
#include <string.h>
#include "poireau.hpp"


Poireau::Poireau(int l,String n):Legume(){

  longueur=l;
  nom=n;

}

String Poireau::Caracteristiques(){

  String s= nom + " " + String(longueur); 
  return s;
  
}

int Poireau::TempsDePousse(){

  return(20);

}


String Poireau::getname(){

  return nom;

}


int Poireau::getlenght(){

  return longueur;

}



Poireau& operator+ ( Poireau& p1, Poireau& p2){
  int newl;
  String newname;
  newl=((p2.getlenght())+(p1.getlenght()))/2;
  newname="bébé";
  static Poireau p3(newl,newname);
  return p3;

}

int Poireau::GetPointDeVie(){
    return point_de_vie; 
}

int Poireau::GetDureeArrosage(){
    return 12000; 
}

float Poireau::GetSeuilArrosage(){
    return 60.0; 
}


Poireau::~Poireau(){}

