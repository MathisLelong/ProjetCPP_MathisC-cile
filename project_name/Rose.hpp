#ifndef _Rose_hpp
#define _Rose_hpp

#include "Fleurs.hpp"
#include <string.h>

using namespace std;

class Rose: public Fleurs{

protected :


public :
  Rose();

  virtual int TempsDePousse(); 

  int GetPointDeVie ();

  static void ModifPointDeVie();

  ~Rose(); 

};


#endif
