
#include <string.h>
#include "Rose.hpp"



Rose::Rose(String c):Fleurs("Rose",c, 4000){

}


int Rose::TempsDePousse(){
    return 15;
}

int Rose::GetDureeArrosage(){
    return 5000; 
}

float Rose:: GetSeuilArrosage(){
    return 40.0; 
}



int Rose::GetPointDeVie(){
    return point_de_vie; 
}


Rose::~Rose(){

}
 
