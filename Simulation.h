#ifndef SIMULATION_H
#define SIMULATION_H

#include "SimState.h"
#include "SimStateInfo.h"
#include "Mode.h"
#include "Ship.h"

class Simulation{
    private:
        SimState* state;
        Mode* strategy;
        Ship* ship;
    public:
        Simulation();
        ~Simulation();
        SimStateInfo createSimulation();
        void setSimulation(SimStateInfo*);
        void runSim();
        void setMode(Mode*);
        void setShip(Ship*);
};

#endif