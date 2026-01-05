
#include <string.h>
#include "Tulipe.hpp"



Tulipe::Tulipe(String c):Fleurs("Tulipe",c, 8000){

}

int Tulipe::TempsDePousse(){
    return 8;
}


int Tulipe::GetPointDeVie(){
    return point_de_vie; 
}

int Tulipe::GetDureeArrosage(){
    return 10000; 
}

float Tulipe::GetSeuilArrosage(){
    return 30.0; 
}

Tulipe::~Tulipe(){

}
 
