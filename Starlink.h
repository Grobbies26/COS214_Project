#ifndef STARLINK_H
#define STARLINK_H

#include <iostream>
#include "Rocket.h"
#include "Payload.h"
#include "Stars.h"

using namespace std;

class Starlink: public Payload
{
    public:
        Starlink();
        void handleRequest(Rocket*);
        virtual void deliver();
    private:
        Stars* network;
};

#endif