#ifndef TESTING_H
#define TESTING_H

#include <iostream>
#include "State.h"

using namespace std;

class Testing : public State
{
public:
    void update(Rocket *r);
    string getState();
};
#endif