#ifndef _Citrouille_hpp
#define _Citrouille_hpp

# include "legume.hpp"


using namespace std ;

class Citrouille: public Legume{

protected:
  
  int diametre;
  string nom;

public:

  Citrouille (int d, string n);
  
  void Caracteristiques();

  int TempsDePousse();

  Citrouille& operator+( Citrouille& c1);

  string getname();

  int getdiam();

  friend Citrouille& operator+ (Citrouille& c1, Citrouille& c2);
  
  ~Citrouille();


};




Citrouille& operator+ (Citrouille& p1, Citrouille& p2);











#endif
