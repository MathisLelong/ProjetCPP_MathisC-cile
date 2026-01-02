
#include <string.h>
#include "Tulipe.hpp"



Tulipe::Tulipe(String c):Fleurs("Tulipe",c){

}

int Tulipe::TempsDePousse(){
    return 8;
}


int Tulipe::GetPointDeVie(){
    return point_de_vie; 
}



Tulipe::~Tulipe(){

}
 
