/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include "LCD.hpp"
#include "Rose.hpp"
#include "CapteurTemperature.hpp"

CapteurTemperature capteurHum;
Rose maRose("Rouge");

Application::Application() 
{
  // Code
  ; 
}
  
Application::~Application()
{
  // Code
  ;
}  

void Application::init(void)
{
  // Code
  Serial.begin(115200);
  capteurHum.init(); 
    
}


void Application::run(void)
{
  // Code
    capteurHum.lireValeurhum(); // lire l'humidité
    maRose.ModifPointDeVie(capteurHum);

    Serial.print("Points de vie de la rose: ");
    Serial.println(maRose.GetPointDeVie());
    Serial.println(capteurHum.lireValeurtemp());
    Serial.println(capteurHum.lireValeurhum());
    Serial.println(maRose.GetPointDeVie());

    delay(5000); // toutes les 5 secondes 
}
