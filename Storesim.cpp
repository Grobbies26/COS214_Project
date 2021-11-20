#ifndef STORE_SIM_CPP
#define STORE_SIM_CPP

#include "Storesim.h"

StoreSim::StoreSim(Simulation* s):Command(s){

}

void StoreSim::execute(){
    std::cout << "Executing \"Store Sim\" command.\n";
    sim->setBack(sim->createSimBackup(sim->getStrat(),sim->getShip(),sim->getTmode()));
}

#endif