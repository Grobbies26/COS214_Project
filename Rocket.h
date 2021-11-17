#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include "State.h"

using namespace std;

class Rocket
{
private:
    State *state;

public:
    Rocket();
    ~Rocket();
    State *getState();
    void setState(State *state);
};
#endif