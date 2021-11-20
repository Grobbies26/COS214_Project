#include "Testing.h"
#include "Refurbishing.h"
#include <iostream>
#include <string>

using namespace std;

Testing::Testing(Rocket* roc):State(roc){
    state = "Testing";
}

void Testing::handle()
{
    cout << getState() << ": The rocket is now being tested" << endl;
    if(rocket->coreSystemCheck()){
        cout << "\tAll cores are functioning normally" << endl;
    }
    if(rocket->engineSystemCheck()){
        cout << "\tAll engines are functioning normally" << endl;
    }
    if(rocket->singleSystemCheck()){
        cout << "\tSingle vacuum merlin engine is functioning normally" << endl;
    }
}

State *Testing::update()
{
    return new Refurbishing(getRocket());
}