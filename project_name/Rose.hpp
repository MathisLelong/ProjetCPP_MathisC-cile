#ifndef _Rose_hpp
#define _Rose_hpp

#include "Fleurs.hpp"
#include <string.h>



class Rose: public Fleurs{

protected :


public :
  Rose(String c);

  virtual int TempsDePousse(); 

  int GetPointDeVie ();



  ~Rose(); 

};


#endif
