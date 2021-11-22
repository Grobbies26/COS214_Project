#ifndef BUILDER_H
#define BUILDER_H

#include "Ship.h"
#include "Rocket.h"

class Builder:public Ship{
    public:
        Builder();
        virtual ~Builder();
        virtual void createShip(bool,int);
};

#endif