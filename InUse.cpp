#include "InUse.h"
#include <iostream>

using namespace std;

InUse::InUse()
{
    state = "InUse";
}

void InUse::handle()
{
    cout << "The rocket has been used and is now getting refurbished" << endl;
}

State *InUse::update()
{
    return new Refurbishing();
}