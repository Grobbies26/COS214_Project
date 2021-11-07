#ifndef ROCKET_H
#define ROCKET_H
#include "Rocket.h"
#include <iostream>
using namespace std;

class RocketFactory
{
public:
    RocketFactory(){}
    virtual ~RocketFactory(){}
    virtual Rocket* createRocket() = 0;
    virtual Rocket* createPayload() = 0;
};

#endif