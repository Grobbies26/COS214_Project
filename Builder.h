#ifndef BUILDER_H
#define BUILDER_H

#include "Ship.h"
#include "Rocket.h"

class Builder:public Ship{
    public:
        Builder();
        virtual ~Builder();
        virtual Rocket* createShip();
        virtual Rocket* getRocket();
        virtual void setRocket(Rocket*);
};

#endif