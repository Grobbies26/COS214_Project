#ifndef ABSLASER_H
#define ABSLASER_H

#include <iostream>

using namespace std;

class ABSLaser
{
public:
    ABSLaser();
    ~ABSLaser();
    virtual void notify(string)=0;
};



#endif