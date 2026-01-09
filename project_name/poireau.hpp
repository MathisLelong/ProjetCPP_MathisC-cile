#ifndef _Poireau_hpp
#define _Poireau_hpp

# include "legume.hpp"


using namespace std ;

class Poireau: public Legume{

protected:
  
  int longueur;
  string nom;

public:

  Poireau(int l, string n);
  
  void Caracteristiques();

  int TempsDePousse();

  Poireau& operator+( Poireau& p1);

  string getname();

  int getlenght();

  friend Poireau& operator+ (Poireau& p1, Poireau& p2);
  
  ~Poireau();


};




Poireau& operator+ (Poireau& p1, Poireau& p2);











#endif



