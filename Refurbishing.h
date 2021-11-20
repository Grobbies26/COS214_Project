#ifndef REFURBISHING_H
#define REFURBISHING_H

#include <iostream>
#include "State.h"
#include "ReadyToTest.h"

using namespace std;

class Refurbishing : public State
{
public:
    Refurbishing(Rocket*);
    void handle();
    State *update();
};
#endif