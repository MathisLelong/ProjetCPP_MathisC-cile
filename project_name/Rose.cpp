
#include <string.h>
#include "Rose.hpp"



Rose::Rose(String c):Fleurs("Rose",c){

}


int Rose::TempsDePousse(){
    return 15;
}



int Rose::GetPointDeVie(){
    return point_de_vie; 
}


Rose::~Rose(){

}
 
