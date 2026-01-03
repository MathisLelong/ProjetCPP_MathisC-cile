#ifndef BUZZER_HPP
#define BUZZER_HPP

#include "Actionneur.hpp"

#define BROCHE_BUZZER 

class Buzzer : public Actionneur {
public:
    Buzzer(int b);
    virtual ~Buzzer();
    
    void activer() override;
    void desactiver() override;
    void bip(int duree = 100);
    void signal(int nbBips, int duree = 100, int pause = 100);
};

#endif