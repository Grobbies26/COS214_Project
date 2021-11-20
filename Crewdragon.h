#ifndef CREW_DRAGON_H
#define CREW_DRAGON_H

#include "Payload.h"
#include "Rocket.h"
#include "Singlevacuummerlin.h"

class CrewDragon : public Payload {
    public:
        CrewDragon();
        void handleRequest(Rocket*);
        virtual void deliver();
};

#endif