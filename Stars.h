#ifndef STARS_H
#define STARS_H

#include "SpaceXObserver.h"
#include "ABSLaser.h"

#include <iostream>

class Stars {
public:

  virtual void add (Stars*) = 0;
  virtual  void remove() = 0;
  virtual void setNext(Stars*) = 0;

  virtual Stars* getNext() = 0;
  virtual void setState(string s){}
  virtual string getState(){return "";}
  virtual void statusChanged(ABSLaser*){}
  virtual void attachUser(SpaceXObserver* sxu){}

  virtual void LaserCommunication(string s){}
  virtual void sendRadioSignal(){}   
};
#endif