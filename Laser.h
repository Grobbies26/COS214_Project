#ifndef LASER_H
#define LASER_H

#include <iostream>
#include "Node.h"

using namespace std;

class Laser
{
private:
    Node* starlinkList;
public:
    void notify(Starlink*);
};



#endif