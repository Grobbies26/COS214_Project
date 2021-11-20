#ifndef READYTOTEST_H
#define READYTOTEST_H

#include <iostream>
#include "State.h"
#include "Testing.h"

using namespace std;

class ReadyToTest : public State
{
public:
    ReadyToTest(Rocket*);
    void handle();
    State *update();
};
#endif