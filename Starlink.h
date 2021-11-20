#ifndef STARLINK_H
#define STARLINK_H

#include <iostream>
#include "Rocket.h"
#include "Payload.h"
#include "Links.h"

using namespace std;

class Starlink: public Payload
{
    public:
        Starlink();
        void handleRequest(Rocket*);
        virtual void deliver();
    private:
        Links* network;
};

#endif