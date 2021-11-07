#ifndef SIMULATION_H
#define SIMULATION_H

#include "SimState.h"
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
        SimState createSimulation();
        void setSimulation(SimState*);
        void runSim();
        void setMode(Mode*);
        void setShip(Ship*);
};

#endif