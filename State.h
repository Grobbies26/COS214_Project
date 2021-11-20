#ifndef STATE_H
#define STATE_H

#include "Rocket.h"

#include <iostream>

using namespace std;

class State
{
protected:
    string state;
    Rocket* rocket;
public:
    State();
    State(Rocket*);
    ~State();
    virtual void handle() = 0;
    virtual State* update() = 0;
    void setState(string);
    string getState();
    Rocket* getRocket();
};
#endif