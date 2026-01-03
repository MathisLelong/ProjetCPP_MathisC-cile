#ifndef LED_HPP
#define LED_HPP

#include "Actionneur.hpp"

#define BROCHE_LED D5

class Led : public Actionneur {
public:
    Led(int b);
    virtual ~Led();
    
    void activer() override;
    void desactiver() override;
    void toggle();
};

#endif

