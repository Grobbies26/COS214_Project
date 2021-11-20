#include "ReadyToUse.h"
#include <iostream>
#include <string>

using namespace std;

ReadyToUse::ReadyToUse(Rocket* roc):State(roc)
{
    state = "ReadyToUse";
}

void ReadyToUse::handle()
{
    cout << getState() << ": The rocket is now ready to be used" << endl;
}

State *ReadyToUse::update()
{
    return new InUse(getRocket());
}