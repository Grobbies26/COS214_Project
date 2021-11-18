#ifndef SIMULATION_H
#define SIMULATION_H

#include "Mode.h"
#include "Ship.h"
#include "SimBackup.h"

class Simulation{
    private:
        SimBackup* state;
        Mode* strategy;
        Ship* ship;
    
    public:
        Simulation();
        ~Simulation();
        SimBackup* createSimulation();
        void setBackup(SimBackup*);
        void runSim();
        
        void setMode(Mode*);
        void setShip(Ship*);

};

#endif


