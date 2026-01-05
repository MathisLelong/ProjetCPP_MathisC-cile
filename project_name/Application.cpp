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
  //capteurHum.init(); 
  
  lcd.init(); 
  Temp.init(); 
  arroser.AjouterPlante(&rose1);
  arroser.AjouterPlante(&tulipe1);
  arroser.AjouterPlante(&rose2);
 
  plantes = { &rose1, &tulipe1, &rose2 };
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
 // arroser.ChangerModeArrosage(); 
  //arroser.ArroserPlante(); 
  lcd.GererMenuLCD(bp, Temp, plantes); 
  delay(50);
}
