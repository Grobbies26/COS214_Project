#ifndef STARS_H
#define STARS_H

#include <iostream>

class Stars {
public:

  virtual void add (Stars*) = 0;
  virtual  void remove() = 0;
  virtual void setNext() = 0;

  virtual Stars* getNext() = 0;
  
};
#endif