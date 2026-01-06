/*********************************************************************
 * @file  Apllication.h
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef APPLICATION_H_
#define APPLICATION_H_
#include <Arduino.h>
#include <vector>
#include "LCD.hpp"
#include "Led.hpp"
#include "Buzzer.hpp"
#include "CapteurTactile.hpp"
#include "CapteurTemperature.hpp"
#include "Arrosage.hpp"
#include "Rose.hpp"
#include "Tulipe.hpp"
#include "BoutonPoussoir.hpp"
#include "plante.hpp"
/**
  * @class Application
  * @brief Classe Application 
*/    
class Application
{
  protected :
    std::vector<Plante*> plantes;
    unsigned long DerniereMiseAJourPlantes;
    const unsigned long IntervalMiseAJourPlantes = 10000;
  public :
    /**
     * @fn Application();
     * @brief Constructeur par defaut
    */    
    Application();
    /**
     * @fn Application();
     * @brief Destructeur
    */    
    ~Application();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void init(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de l'application
    */
    void run(void);
};
#endif