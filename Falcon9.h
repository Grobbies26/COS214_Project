#ifndef FALCON_NINE_H
#define FALCON_NINE_H

#include "Rocket.h"
#include "Falcon9core.h"
#include "Merlinengine.h"

class Falcon9 : public Rocket {
    private:
        Falcon9Core* core;
        MerlinEngine** engines;
    public:
        Falcon9();
        ~Falcon9();
};

#endif