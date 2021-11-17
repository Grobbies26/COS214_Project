#ifndef SHIP_H
#define SHIP_H

#include "Rocket.h"

class Ship{
    private:
        Rocket* rocket;
    public:
        Ship();
        virtual ~Ship();
        virtual Rocket* createShip()=0;
        virtual Rocket* getRocket();
        virtual void setRocket(Rocket*);
};

#endif