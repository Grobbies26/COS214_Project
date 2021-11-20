#ifndef READYTOUSE_H
#define READYTOUSE_H

#include <iostream>
#include "State.h"
#include "InUse.h"

using namespace std;

class ReadyToUse : public State
{
public:
    ReadyToUse(bool, bool, bool);
    void handle();
    State *update();
};
#endif