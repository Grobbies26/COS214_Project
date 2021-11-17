#ifndef FALCON9CREWDRAGON_H
#define FALCON9CREWDRAGON_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class Falcon9CrewDragon : public RocketFactory
{
public:
    Falcon9CrewDragon* createRocket();
    Falcon9CrewDragon* createPayload();
};

#endif