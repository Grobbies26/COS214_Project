#ifndef READYTOUSE_H
#define READYTOUSE_H

#include <iostream>
#include "State.h"
#include "InUse.h"

using namespace std;

class ReadyToUse : public State
{
public:
    ReadyToUse();
    void handle();
    State *update();
};
#endif