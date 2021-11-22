#ifndef ABSSIM_H
#define ABSSIM_H

#include "Mode.h"
#include "Ship.h"
#include "SimBackup.h"
#include "SimStore.h"
#include "Button.h"

#include <iostream>

class ABSSim{
    public:
        ABSSim();
        virtual ~ABSSim();
        virtual SimBackup* createSimBackup(Mode*,Ship*,bool)=0;
        virtual void runSim()=0;
        virtual void setMode(Mode*)=0;
        virtual void setShip(Ship*)=0;
        virtual void newShip()=0;
        virtual void isTMode()=0;
        virtual void alterRocket()=0;
        virtual void testRocket(Rocket*)=0;
        virtual void setButtons()=0;
        virtual void tm()=0;
        virtual void nm()=0;
        virtual Mode* getStrat()=0;
        virtual SimStore* getBack()=0;
        virtual void setBack(SimBackup*)=0;
        virtual bool getTmode()=0;
        virtual Ship* getShip()=0;
    protected:
        SimStore* state;
        Mode* strategy;
        Ship* ship;
        bool tmode;
        Button** list;
};

#endif