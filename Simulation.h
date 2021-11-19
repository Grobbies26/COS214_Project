#ifndef SIMULATION_H
#define SIMULATION_H

#include "Mode.h"
#include "Ship.h"
#include "SimBackup.h"

class Simulation{
    public:
        Simulation();
        ~Simulation();
        SimBackup* createSimBackup();
        void setBackup(SimBackup*);
        void runSim();
        
        void setMode(Mode*);
        void setShip(Ship*);
        void isTMode();
    private:
        SimBackup* state;
        Mode* strategy;
        Ship* ship;
        bool tmode;
};

#endif


