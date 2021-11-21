#ifndef LAUNCH_CPP
#define LAUNCH_CPP

#include "Launch.h"

Launch::Launch(ABSSim* s):Command(s){

}

void Launch::execute(){
    std::cout << "Executing \"Launch\" command.\n";
    sim->getStrat()->run(sim->getShip()->getShip());
}

#endif