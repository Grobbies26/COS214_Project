#ifndef HEAVYFALCONCREWDRAGON_H
#define HEAVYFALCONCREWDRAGON_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class HeavyFalconCrewDragon : public RocketFactory
{
    public:
        HeavyFalconCrewDragon();
        ~HeavyFalconCrewDragon();
        Rocket* createRocket();
        Rocket* createPayload();
};

#endif