#ifndef TESTING_H
#define TESTING_H

#include <iostream>
#include "State.h"
#include "ReadyToUse.h"

using namespace std;

class Testing : public State
{
public:
    Testing(Rocket*);
    void handle();
    State *update();
};
#endif
