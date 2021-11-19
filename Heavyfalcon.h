#ifndef HEAVY_FALCON_H
#define HEAVY_FALCON_H

#include "Rocket.h"
#include "Falcon9core.h"
#include "Merlinengine.h"

class HeavyFalcon : public Rocket {
    public:
        HeavyFalcon();
        ~HeavyFalcon();
    private:
        Falcon9Core** cores;
        MerlinEngine** engines;
};

#endif