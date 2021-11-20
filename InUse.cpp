#include "InUse.h"
#include <iostream>
#include <string>

using namespace std;

InUse::InUse(Rocket* roc):State(roc)
{
    state = "InUse";
}

void InUse::handle()
{
    cout << getState() << ": The rocket is now in use for the real launch" << endl;
    if(rocket->coreSystemCheck()){
        cout << "\tAll cores are ready to be used in real launch" << endl;
    }
    if(rocket->engineSystemCheck()){
        cout << "\tAll engines are ready to be used in real launch" << endl;
    }
    if(rocket->singleSystemCheck()){
        cout << "\tSingle vacuum merlin engine is ready to be used in real launch" << endl;
    }
}

State *InUse::update()
{
    return new Refurbishing(getRocket());
}