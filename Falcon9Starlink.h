#ifndef FALCON9STARLINK_H
#define FALCON9STARLINK_H
#include <iostream>
#include "RocketFactory.h"
using namespace std;

class Falcon9Starlink : public RocketFactory
{
public:
    Falcon9Starlink* createRocket();
    Falcon9Starlink* createPayload();
};

#endif