#ifndef FALCON9DRAGONSC_H
#define FALCON9DRAGONSC_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class Falcon9DragonSC : public RocketFactory
{
public:
    Rocket* createRocket();
    Rocket* createPayload();
};

#endif