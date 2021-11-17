#ifndef DRAGON_SC_H
#define DRAGON_SC_H

#include "../abstract/payload.h"
#include "Rocket.h"

class DragonSC : public Payload {
    public:
        DragonSC();
        void handleRequest(Rocket*);
};

#endif