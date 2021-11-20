#include "Decommissioned.h"
#include <iostream>
#include <string>

using namespace std;

Decommissioned::Decommissioned()
{
    state = "Decommissioned";
}

void Decommissioned::handle()
{
    cout << getState() << ": The rocket has been decommissioned" << endl;
}

State *Decommissioned::update()
{
    return NULL;
}