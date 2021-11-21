#ifndef SIMULATION_H
#define SIMULATION_H

#include "Mode.h"
#include "Ship.h"
#include "SimBackup.h"
#include "SimStore.h"
#include "Button.h"
#include "ABSSim.h"

class Simulation:public ABSSim{
    public:
        Simulation();
        ~Simulation();
        SimBackup* createSimBackup(Mode*,Ship*,bool);
        void runSim();
        void setMode(Mode*);
        void setShip(Ship*);
        void newShip();
        void isTMode();
        void alterRocket();
        void testRocket(Rocket*);
        void setButtons();
        void tm();
        void nm();
        Mode* getStrat();
        SimStore* getBack();
        void setBack(SimBackup*);
        bool getTmode();
        Ship* getShip();
};

#endif


