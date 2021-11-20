#ifndef ROCKET_H
#define ROCKET_H

#include "Singlevacuummerlin.h"
#include "Falcon9core.h"
#include "Merlinengine.h"
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
    void decommission();
    virtual void handleRequest(Rocket *);
    void add(Rocket *);
    Rocket *getSuccessor();
    void setSuccessor(Rocket *);
    string getPayloadType();
    virtual void attach(Rocket*)=0;
    virtual Falcon9Core* getCore( int index );
    virtual Falcon9Core* getCore();
    virtual MerlinEngine* getEngine( int index );
    virtual bool coreSystemCheck();
    virtual bool engineSystemCheck();
    bool singleSystemCheck(); 
    SingleVacuumMerlin* getSingle();
    void setState(State*);
    void staticFire();
};
#endif