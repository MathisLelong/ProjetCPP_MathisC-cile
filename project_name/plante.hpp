#ifndef _plante_hpp
#define _plante_hpp

using namespace std ;

class Plante {

protected :

  static int Compteur;

  public :

  Plante();

  ~Plante();

  virtual void Caracteristiques()=0;
  virtual int TempsDePousse()=0;


  int GetCompteur ();

  

};




#endif
