#include "Simulation.h"
#include "SimBackup.h"

#include <iostream>

using namespace std;

Simulation :: Simulation()
{
    tmode = false;
    strategy = nullptr;
    ship = nullptr;
    state = nullptr;
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
   

void Simulation :: runSim(){   
    //test fire rocket


    ship->attachPayload();

    //state = createSimBackup();

    strategy->run(ship->getShip());   
}   
 
SimBackup* Simulation :: createSimBackup()
{
    return new SimBackup();
}

void Simulation :: setBackup(SimBackup* mem)
{
        
}

void Simulation::setMode(Mode* mode){
    strategy = mode;
}

void Simulation::setShip(Ship* ship){
    this->ship = ship;
}

void Simulation::isTMode(){
    tmode = true;
}

