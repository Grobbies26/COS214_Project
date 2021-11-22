#ifndef NORMAL_MODE_CPP
#define NORMAL_MODE_CPP

#include "Normalmode.h"

NormalMode::NormalMode(ABSSim* s):Command(s){

}

void NormalMode::execute(){
    std::cout << "Executing \"NormalMode\" command.\n";
    sim->nm();
}

#endif