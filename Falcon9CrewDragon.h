#ifndef FALCON9CREWDRAGON_H
#define FALCON9CREWDRAGON_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class Falcon9CrewDragon : public RocketFactory
{
public:
    Rocket* createRocket();
    Rocket* createPayload();
};

#endif