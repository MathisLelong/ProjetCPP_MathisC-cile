#include <iostream>
#include <string.h>
#include "Tulipe.hpp"

using namespace std ;

Tulipe::Tulipe(string c):Fleurs("Tulipe",c){

}

int Tulipe::TempsDePousse(){
    return 8;
}


int Tulipe::GetPointDeVie(){
    return point_de_vie; 
}

 void Tulipe::ModifPointDeVie(){

    //rajouter quand on aura un truc arrosage / capteur d'humidité 

}

Tulipe::~Tulipe(){

}
 
