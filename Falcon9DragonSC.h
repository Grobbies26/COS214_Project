#ifndef FALCON9DRAGONSC_H
#define FALCON9DRAGONSC_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class Falcon9DragonSC : public RocketFactory
{
public:
    Falcon9DragonSC();
    ~Falcon9DragonSC();
    Rocket* createRocket();
    Rocket* createPayload();
};

#endif