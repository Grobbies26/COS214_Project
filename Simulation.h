#ifndef SIMULATION_H
#define SIMULATION_H

#include "Mode.h"
#include "Ship.h"
#include "SimBackup.h"
#include "SimStore.h"
#include "Button.h"

class Simulation{
    public:
        Simulation();
        ~Simulation();
        SimBackup* createSimBackup(Mode*,Ship*,bool);
        void restore(SimBackup*);
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
    private:
        SimStore* state;
        Mode* strategy;
        Ship* ship;
        bool tmode;
        Button** list;
};

#endif


