#ifndef REFURBISHING_H
#define REFURBISHING_H

#include <iostream>
#include "State.h"

using namespace std;

class Refurbishing : public State
{
public:
    void update(Rocket *r);
    string getState();
};
#endif