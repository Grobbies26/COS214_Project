#ifndef STORE_SIM_H
#define STORE_SIM_H

#include "Normalmode.h"
#include "ABSSim.h"

class StoreSim: public Command {
    public:
        StoreSim(ABSSim*);
        void execute();
};

#endif