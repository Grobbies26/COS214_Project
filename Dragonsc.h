#ifndef DRAGON_SC_H
#define DRAGON_SC_H

#include "Payload.h"
#include "Rocket.h"

class DragonSC : public Payload {
    public:
        DragonSC();
        void handleRequest(Rocket*);
};

#endif