#ifndef LASER_H
#define LASER_H

#include <iostream>
#include "Links.h"
#include "SatelliteIterator.h"

using namespace std;

class Laser
{
private:
    Links* nodeList;
public:
    Laser(Links*);
    ~Laser(){}
    void notify(string);
};



#endif