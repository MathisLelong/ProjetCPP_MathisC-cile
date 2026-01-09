#ifndef _Poireau_hpp
#define _Poireau_hpp

# include "legume.hpp"



class Poireau: public Legume{

protected:
  
  int longueur;
  String nom;

public:

  Poireau(int l, String n);
  
  String Caracteristiques();

  int TempsDePousse();

  Poireau& operator+( Poireau& p1);

  String getname();

  int getlenght();

  friend Poireau& operator+ (Poireau& p1, Poireau& p2);

  int GetPointDeVie();

int GetDureeArrosage();

float GetSeuilArrosage();
  
  ~Poireau();


};




Poireau& operator+ (Poireau& p1, Poireau& p2);











#endif



