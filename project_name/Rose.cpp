#include <iostream>
#include <string.h>
#include "Rose.hpp"

using namespace std ;

Rose::Rose():Fleurs(nom,couleur){

  printf("Rose créée");

}

int Rose::TempsDePousse(){
    return 15;
}



int Rose::GetPointDeVie(){
    return point_de_vie; 
}

 void Rose::ModifPointDeVie(){

    //rajouter quand on aura un truc arrosage / capteur d'humidité 

}

Rose::~Rose(){

}
 
