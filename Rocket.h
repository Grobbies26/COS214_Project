#ifndef ROCKET_H
#define ROCKET_H

#include "Singlevacuummerlin.h"
#include "State.h"
#include "Decommissioned.h"
#include <iostream>
#include <string>

using namespace std;

class Rocket
{
private:
    SingleVacuumMerlin *single;
    State *state;
    string payloadType;
    Rocket *successor;

public:
    Rocket(string);
    virtual ~Rocket();
    void change();
    void decommission();
    virtual void handleRequest(Rocket *);
    void add(Rocket *);
    Rocket *getSuccessor();
    void setSuccessor(Rocket *);
    string getPayloadType();
    virtual void attach(Rocket*)=0;
};
#endif