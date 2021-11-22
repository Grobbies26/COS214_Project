#include "Testing.h"
#include "Refurbishing.h"
#include <iostream>
#include <string>

using namespace std;

Testing::Testing(bool c, bool e, bool s):State(c,e,s){
    state = "Testing";
}

void Testing::handle()
{
    cout << getState() << ": The rocket is now being tested" << endl;
    if(getCore()){
        cout << "\tAll cores are functioning normally" << endl;
    }
    if(getEngine()){
        cout << "\tAll engines are functioning normally" << endl;
    }
    if(getSingle()){
        cout << "\tSingle vacuum merlin engine is functioning normally" << endl;
    }
}

State *Testing::update()
{
    return new Refurbishing(getCore(),getEngine(),getSingle());
}