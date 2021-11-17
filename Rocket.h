#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include "State.h"
#include "../concrete/singlevacuummerlin.h"
#include <string>

using namespace std;

class State;

class Rocket
{
private:
    SingleVacuumMerlin* single;
    State *state;
    string payloadType;
    Rocket* successor;
public:
    Rocket(string);
    virtual ~Rocket();
    void change();
    State *getState();
    void setState(State *state);
    virtual void handleRequest(Rocket*);
    void add(Rocket*);
    Rocket* getSuccessor();
    void setSuccessor(Rocket*);
    string getPayloadType();
};
#endif