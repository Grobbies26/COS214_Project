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
        Falcon9Core* getCore( int index );
        MerlinEngine* getEngine( int index );
        bool coreSystemCheck(); //Returns true if all cores are ready.
        bool engineSystemCheck(); //Returns true if all engines are ready.
        void handleRequest(Rocket* pRocket);
};

#endif