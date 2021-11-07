#ifndef FALCON_NINE_H
#define FALCON_NINE_H

#include "../abstract/rocket.h"
#include "falcon9core.h"
#include "merlinengine.h"

class Falcon9 : public Rocket {
    private:
        Falcon9Core* core;
        MerlinEngine** engines;
};

#endif