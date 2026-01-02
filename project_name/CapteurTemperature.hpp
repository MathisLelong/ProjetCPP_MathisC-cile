#ifndef _CapteurTemperature_hpp
#define _CapteurTemperature_hpp
#include <Arduino.h>
#include <string.h>
#include <Wire.h>
#include <Adafruit_SHT31.h>
#include "Capteur.hpp"



class CapteurTemperature : public Capteur {

  protected : 

  float Temperature; 
  int Humidite; 
  Adafruit_SHT31 sht31;


  public : 

    CapteurTemperature(); 
    void init();


    float lireValeurtemp();
   
    void AfficheTemperature();

     float lireValeurhum();
   
     void AfficheHumidite();


  ~CapteurTemperature(); 

};


#endif
