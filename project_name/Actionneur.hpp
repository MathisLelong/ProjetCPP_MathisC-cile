#ifndef ACTIONNEUR_HPP
#define ACTIONNEUR_HPP

#include "Peripherique.hpp"

class Actionneur : public Peripherique {
protected:
    bool etat;
    
public:
    Actionneur(int b);
    virtual ~Actionneur();
    
    virtual void activer() = 0;
    virtual void desactiver() = 0;
    bool getEtat() { return etat; }
};

#endif