#ifndef INUSE_H
#define INUSE_H

#include <iostream>
#include "State.h"
#include "Refurbishing.h"

using namespace std;

class InUse : public State
{
public:
    InUse(bool, bool, bool);
    void handle();
    State *update();
};
#endif