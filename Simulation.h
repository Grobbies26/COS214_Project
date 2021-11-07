#ifndef SIMULATION_H
#define SIMULATION_H

#include "SimState.h"
#include "SimStateInfo.h"
#include "Mode.h"

class Simulation{
    private:
        SimState* state;
        Mode* strategy;
    public:
        Simulation();
        ~Simulation();
        SimStateInfo createSimulation();
        void setSimulation(SimStateInfo*);
        void runSim();
        void setMode(Mode*);
};

#endif