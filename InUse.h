#ifndef INUSE_H
#define INUSE_H

#include <iostream>
#include "State.h"
#include "Refurbishing.h"

using namespace std;

class InUse : public State
{
public:
    InUse(Rocket*);
    void handle();
    State *update();
};
#endif