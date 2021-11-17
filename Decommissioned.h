#ifndef DECOMMISSIONED_H
#define DECOMMISSIONED_H

#include <iostream>
#include "State.h"

using namespace std;

class Decommissioned : public State
{
public:
    void update(Rocket *r);
    string getState();
};
#endif