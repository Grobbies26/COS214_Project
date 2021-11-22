#ifndef FALCON_NINE_H
#define FALCON_NINE_H

#include "Rocket.h"
#include "Falcon9core.h"
#include "Merlinengine.h"

class Falcon9 : public Rocket {
    public:
        Falcon9();
        ~Falcon9();
        Falcon9Core* getCore();
        MerlinEngine* getEngine( int index );
        bool coreSystemCheck(); //Returns true if core is ready.
        bool engineSystemCheck(); //Returns true if all engines are ready.
        void handleRequest(Rocket* pRocket);
        void attach(Rocket* r){}
        void deliver(){}
    private:
        Falcon9Core* core;
        MerlinEngine** engines;
};

#endif