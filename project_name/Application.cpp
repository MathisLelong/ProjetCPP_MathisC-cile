/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"


CapteurTemperature Temp;
LCD lcd; 
Led led(BROCHE_LED);
CapteurTactile ct(BROCHE_CT);
Buzzer buzz(BROCHE_BUZZER);
BoutonPoussoir bp(BROCHE_BP);

Rose rose1("rouge");
Tulipe tulipe1("bleue");
Rose rose2("blanche");

Arrosage arroser(led,ct,buzz,Temp);


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
  
  lcd.Init(); 
  Temp.Init(); 
  arroser.AjouterPlante(&rose1);
  arroser.AjouterPlante(&tulipe1);
  arroser.AjouterPlante(&rose2);
 
  plantes = { &rose1, &tulipe1, &rose2 };
}


void Application::run(void)
{
  // Code
   // capteurHum.lireValeurhum(); // lire l'humidité
   if (millis() - DerniereMiseAJourPlantes >= IntervalMiseAJourPlantes){
    rose1.ModifPointDeVie(Temp);
    tulipe1.ModifPointDeVie(Temp);
    rose2.ModifPointDeVie(Temp);
    DerniereMiseAJourPlantes = millis();} 

  arroser.ChangerModeArrosage(); 
  //arroser.ArroserPlante(); 
  lcd.GererMenuLCD(bp, Temp, plantes); 
    
}
