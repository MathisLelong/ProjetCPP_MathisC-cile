/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include "LCD.hpp"
#include "Rose.hpp"
#include "Tulipe.hpp"
#include "CapteurTemperature.hpp"
#include "Led.hpp"
#include "Arrosage.hpp"

CapteurTemperature Temp;

//LCD lcd; 
Led led(BROCHE_LED);
CapteurTactile ct(BROCHE_CT);
Buzzer buzz(BROCHE_BUZZER);
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
  //capteurHum.init(); 
  Temp.init(); 
 // lcd.init(); 
  arroser.AjouterPlante(&rose1);
  arroser.AjouterPlante(&tulipe1);
  arroser.AjouterPlante(&rose2);
 
 
}


void Application::run(void)
{
  // Code
   // capteurHum.lireValeurhum(); // lire l'humidité
    //maRose.ModifPointDeVie(capteurHum);

   /* Serial.print("Points de vie de la rose: ");
    Serial.println(maRose.GetPointDeVie());
    Serial.println(capteurHum.lireValeurtemp());
    Serial.println(capteurHum.lireValeurhum());
    Serial.println(maRose.GetPointDeVie());*/

     //lcd.afficherMessage("coucou") ; 

   // delay(3000); // 
   // lcd.effacer(); 
   // delay(1000);
    //lcd.afficherTemperature(capteurTemp.lireValeurtemp()) ; 
    //lcd.afficherHumidite(capteurHum.lireValeurhum()) ; 

   /* led.activer(); 
    delay(3000);
    led.toggle(); */
  arroser.ChangerModeArrosage(); 
  arroser.ArroserPlante(); 

}
