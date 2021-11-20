#ifndef DRAGON_SC_H
#define DRAGON_SC_H

#include "Payload.h"
#include "Rocket.h"
#include "Singlevacuummerlin.h"

class DragonSC : public Payload {
    public:
        DragonSC();
        void handleRequest(Rocket*);
        SingleVacuumMerlin* getEngine();
        bool engineSystemCheck(); //Returns true if engine is ready.
};

#endif