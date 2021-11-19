#ifndef DECOMMISSIONED_H
#define DECOMMISSIONED_H

#include <iostream>
#include "State.h"

using namespace std;

class Decommissioned : public State
{
public:
    Decommissioned();
    void handle();
    State *update();
};
#endif