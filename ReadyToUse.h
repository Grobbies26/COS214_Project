#ifndef READYTOUSE_H
#define READYTOUSE_H

#include <iostream>
#include "State.h"

using namespace std;

class ReadyToUse : public State
{
public:
    void update(Rocket *r);
    string getState();
};
#endif