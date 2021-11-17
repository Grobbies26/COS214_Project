#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "Rocket.h"

using namespace std;

class State
{
public:
    ~State();
    virtual void update(Rocket *r) = 0;
    virtual string getState() = 0;
};
#endif