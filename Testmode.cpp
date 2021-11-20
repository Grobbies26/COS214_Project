#ifndef TESTMODE_CPP
#define TESTMODE_CPP

#include "Testmode.h"

TestMode::TestMode(Simulation* s):Command(s){

}

void TestMode::execute(){
    std::cout << "Executing \"TestMode\" command.\n";
    sim->tm();
}

#endif