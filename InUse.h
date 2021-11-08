#ifndef INUSE_H
#define INUSE_H

#include <iostream>
#include "State.h"

using namespace std;

class InUse : public State
{
public:
    void update(Rocket *r);
    string getState();
};
#endif