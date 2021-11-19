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

    if(tmode == true){
        //
    }

    ship->attachPayload();

    state = createSimBackup(strategy,ship,tmode);

    strategy->run(ship->getShip(),state);   
}   
 
SimBackup* Simulation :: createSimBackup(Mode* m,Ship* s,bool b)
{
    return new SimBackup(m,s,b);
}

void Simulation :: setBackup(SimBackup* mem)
{
    state = mem;       
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

