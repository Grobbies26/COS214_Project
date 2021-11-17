#ifndef SIMULATION_H
#define SIMULATION_H

 #include "Mode.h"
 #include "Ship.h"
#include "SimStateInfo.h"
#include "SimBackup.h"

class Simulation{
    private:
         SimStateInfo* state;
        Mode* strategy;
        Ship* ship;
    
    public:
        Simulation();
        ~Simulation();
        SimBackup* createSimulation();
        void setSimulation(SimBackup*);
        void runSim();

        void setMode(Mode*);
        void setShip(Ship*);

       
};

#endif


