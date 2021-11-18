#ifndef CREW_DRAGON_H
#define CREW_DRAGON_H

#include "Payload.h"
#include "Rocket.h"

class CrewDragon : public Payload {
    public:
        CrewDragon();
        void handleRequest(Rocket*);
};

#endif