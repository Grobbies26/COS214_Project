#include "Simulation.h"

#include <iostream>

using namespace std;

Simulation :: Simulation()
{

    strategy = nullptr;
    ship = nullptr;
     state = new SimStateInfo();
}
    
Simulation::~Simulation(){
    if (state != nullptr){
        delete state;
    }
    if (strategy != nullptr){
        delete strategy;
    }
    if (ship != nullptr){
        delete ship;
    }
}
   

void Simulation :: runSim()
{
  
}    
 
SimBackup* Simulation :: createSimulation()
{
    return new SimBackup();
}

void Simulation :: setSimulation(SimBackup* mem)
{
        
}

void Simulation::setMode(Mode* mode){
    strategy = mode;
}

void Simulation::setShip(Ship* ship){
    this->ship = ship;
}
