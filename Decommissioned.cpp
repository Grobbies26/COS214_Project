#include "Decommissioned.h"
#include <iostream>

using namespace std;

Decommissioned::Decommissioned()
{
    state = "Decommissioned";
}

void Decommissioned::handle()
{
    cout << "The rocket has been decommissioned" << endl;
}

State *Decommissioned::update()
{
    return NULL;
}