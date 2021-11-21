#ifndef ROCKET_FACTORY_H
#define ROCKET_FACTORY_H
#include "Rocket.h"
#include <iostream>
using namespace std;

class RocketFactory
{
public:
    RocketFactory();
    virtual ~RocketFactory();
    virtual Rocket* createRocket() = 0;
    virtual Rocket* createPayload() = 0;
};

#endif