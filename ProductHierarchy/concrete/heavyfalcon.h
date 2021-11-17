#ifndef HEAVY_FALCON_H
#define HEAVY_FALCON_H

#include "../abstract/rocket.h"
#include "falcon9core.h"
#include "merlinengine.h"

class HeavyFalcon : public Rocket {
    private:
        Falcon9Core** cores;
        MerlinEngine** engines;
};

#endif