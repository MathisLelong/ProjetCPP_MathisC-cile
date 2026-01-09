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
Poireau poireau1(15, "Bernard");
Citrouille citrouille(20,"Marie");
Poireau poireau(10, "Michelle");
Poireau& poireau2 = poireau1+poireau; 
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
  Serial.begin(9600);
  
  lcd.Init(); 
  Temp.Init(); 
  arroser.AjouterPlante(&rose1);
  arroser.AjouterPlante(&tulipe1);
  arroser.AjouterPlante(&rose2);
  arroser.AjouterPlante(&poireau);
  arroser.AjouterPlante(&poireau1);
  arroser.AjouterPlante(&citrouille);
  arroser.AjouterPlante(&poireau2);
 
  plantes = { &rose1, &tulipe1, &rose2, &poireau,&poireau1, &citrouille,&poireau2 };
}


void Application::run(void)
{
  // Code
   // capteurHum.lireValeurhum(); // lire l'humidité
   if (millis() - DerniereMiseAJourPlantes >= IntervalMiseAJourPlantes){
    rose1.ModifPointDeVie(Temp);
    tulipe1.ModifPointDeVie(Temp);
    rose2.ModifPointDeVie(Temp);
    citrouille.ModifPointDeVie(Temp);
    poireau.ModifPointDeVie(Temp);
    poireau1.ModifPointDeVie(Temp);
    poireau2.ModifPointDeVie(Temp); 
    DerniereMiseAJourPlantes = millis();} 

  arroser.ChangerModeArrosage(); 
  arroser.ArroserPlante(); 
  lcd.GererMenuLCD(bp, Temp, plantes); 
    
}
