#include "Simulation.h"
#include "Mode.h"
#include "SimState.h"

Simulation::Simulation(){
    state = nullptr;
    strategy = nullptr;
    ship = nullptr;
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

SimState Simulation::createSimulation(){
    //Temp stub
    return nullptr;
}

void Simulation::runSim(){
    //Temp stub
}

void Simulation::setMode(Mode* mode){
    strategy = mode;
}

void Simulation::setShip(Ship* ship){
    this->ship = ship;
}

void Simulation::setSimulation(SimState* sim){
    state = sim;
}