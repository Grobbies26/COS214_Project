#ifndef SHIP_H
#define SHIP_H

#include "Rocket.h"

class Ship{
    private:
        Rocket* ship; 
        Rocket* rocket;
        Rocket* payload;
    public:
        Ship();
        virtual ~Ship();
        virtual Rocket* createShip(bool,int)=0;
        virtual Rocket* getRocket();
        virtual Rocket* getPayload();
        virtual Rocket* getShip();
        virtual void setRocket(Rocket*);
        virtual void setPayload(Rocket*);
        virtual void setShip(Rocket*);
        virtual void attachPayload();
};

#endif