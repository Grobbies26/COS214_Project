#ifndef FALCON9CREWDRAGON_H
#define FALCON9CREWDRAGON_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class Falcon9CrewDragon : public RocketFactory
{
public:
    Falcon9CrewDragon();
    ~Falcon9CrewDragon();
    Rocket* createRocket();
    Rocket* createPayload();
};

#endif