#ifndef _Legume_hpp
#define _Legume_hpp

# include "plante.hpp"

using namespace std ;

class Legume: public Plante{

protected:

  string espece;


public:

  Legume(string espece);
  virtual void caracteristiques();

  ~Legume();


};


#endif




#endif
