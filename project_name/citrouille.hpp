#ifndef _Citrouille_hpp
#define _Citrouille_hpp

# include "legume.hpp"


using namespace std ;

class Citrouille: public Legume{

protected:
  
  int diametre;
  String nom;

public:

  Citrouille (int d, String n);
  
  String Caracteristiques();

  int TempsDePousse();

  String getname();

  int getdiam();

  friend Citrouille& operator+ (Citrouille& c1, Citrouille& c2);

  int GetPointDeVie();

int GetDureeArrosage();

float GetSeuilArrosage();
  
  ~Citrouille();


};




Citrouille& operator+ (Citrouille& p1, Citrouille& p2);











#endif
