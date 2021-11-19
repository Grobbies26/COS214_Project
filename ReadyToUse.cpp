#include "ReadyToUse.h"
#include <iostream>

using namespace std;

ReadyToUse::ReadyToUse()
{
    state = "ReadyToUse";
}

void ReadyToUse::handle()
{
    cout << "The rocket is now in use" << endl;
}

State *ReadyToUse::update()
{
    return new InUse();
}