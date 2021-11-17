#ifndef READYTOTEST_H
#define READYTOTEST_H

#include <iostream>
#include "State.h"

using namespace std;

class ReadyToTest : public State
{
public:
    void update(Rocket *r);
    string getState();
};
#endif