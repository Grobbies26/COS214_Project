#ifndef DRAGON_SC_H
#define DRAGON_SC_H

#include "Payload.h"
#include "Rocket.h"
#include "Singlevacuummerlin.h"

class DragonSC : public Payload {
    public:
        DragonSC();
        ~DragonSC();
        void handleRequest(Rocket*);
        virtual void deliver();
};

#endif