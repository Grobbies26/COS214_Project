#include "InUse.h"
#include <iostream>
#include <string>

using namespace std;

InUse::InUse()
{
    state = "InUse";
}

void InUse::handle()
{
    cout << getState() << ": The rocket is now in use" << endl;
}

State *InUse::update()
{
    return new Refurbishing();
}