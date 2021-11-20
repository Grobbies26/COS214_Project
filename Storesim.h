#ifndef STORE_SIM_H
#define STORE_SIM_H

#include "Normalmode.h"
#include "Simulation.h"

class StoreSim: public NormalMode {
    public:
        StoreSim(Simulation*);
        void execute();
};

#endif