#ifndef _Tulipe_hpp
#define _Tulipe_hpp

#include "Fleurs.hpp"
#include <string.h>

using namespace std;

class Tulipe: public Fleurs{

protected :


public :
  Tulipe(string c);

  virtual int TempsDePousse(); 

  int GetPointDeVie ();

  static void ModifPointDeVie();

  ~Tulipe(); 

};


#endif
