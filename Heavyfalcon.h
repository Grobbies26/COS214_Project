#ifndef HEAVY_FALCON_H
#define HEAVY_FALCON_H

#include "Rocket.h"
#include "Falcon9core.h"
#include "Merlinengine.h"

class HeavyFalcon : public Rocket {
    private:
        Falcon9Core** cores;
        MerlinEngine** engines;
};

#endif