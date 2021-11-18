#ifndef HEAVYFALCONDRAGONSC_H
#define HEAVYFALCONDRAGONSC_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class HeavyFalconDragonSC : public RocketFactory
{
public:
    Rocket* createRocket();
    Rocket* createPayload();
};

#endif