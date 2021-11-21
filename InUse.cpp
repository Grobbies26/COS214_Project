#include "InUse.h"
#include <iostream>
#include <string>

using namespace std;

InUse::InUse(bool c, bool e, bool s):State(c,e,s)
{
    state = "InUse";
}

void InUse::handle()
{
    cout << getState() << ": The rocket is now in use for the real launch" << endl;
    if(getCore()){
        cout << "\tAll cores are ready to be used in real launch" << endl;
    }
    if(getEngine()){
        cout << "\tAll engines are ready to be used in real launch" << endl;
    }
    if(getSingle()){
        cout << "\tSingle vacuum merlin engine is ready to be used in real launch" << endl;
    }
}

State *InUse::update()
{
    return new Refurbishing(getCore(),getEngine(),getSingle());
}