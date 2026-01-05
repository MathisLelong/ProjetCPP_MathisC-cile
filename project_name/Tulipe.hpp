#ifndef _Tulipe_hpp
#define _Tulipe_hpp

#include "Fleurs.hpp"
#include <string.h>



class Tulipe: public Fleurs{

protected :


public :
  Tulipe(String c);

  virtual int TempsDePousse(); 

  int GetPointDeVie ();

  int GetDureeArrosage();

  float GetSeuilArrosage();

  ~Tulipe(); 

};


#endif
