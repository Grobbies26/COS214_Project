#ifndef LASER_H
#define LASER_H

#include <iostream>
#include "Links.h"
#include "ABSLaser.h"

using namespace std;

class Laser:public ABSLaser
{
private:
    Links* nodeList;
public:
    Laser(Links*);
    ~Laser(){}
    void notify(string);
};



#endif