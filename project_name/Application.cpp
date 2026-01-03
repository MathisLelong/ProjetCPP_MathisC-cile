/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include "LCD.hpp"
#include "Rose.hpp"
#include "CapteurTemperature.hpp"
#include "Led.hpp"

CapteurTemperature capteurHum;
CapteurTemperature capteurTemp;
Rose maRose("Rouge");
LCD lcd; 
Led led(BROCHE_LED); 
Buzzer() 

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
  capteurTemp.init(); 
  lcd.init(); 
 
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


}
