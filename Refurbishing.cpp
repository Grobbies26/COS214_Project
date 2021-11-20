#include "Refurbishing.h"
#include "ReadyToUse.h"
#include <iostream>
#include <string>

using namespace std;

Refurbishing::Refurbishing(Rocket* roc):State(roc)
{
    state = "Refurbishing";
}

void Refurbishing::handle()
{
    cout << getState() << ": The rocket has been tested and is now getting refurbished" << endl;
}

State *Refurbishing::update()
{
    return new ReadyToUse(getRocket());
}