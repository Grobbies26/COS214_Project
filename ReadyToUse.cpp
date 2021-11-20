#include "ReadyToUse.h"
#include <iostream>
#include <string>

using namespace std;

ReadyToUse::ReadyToUse(bool c, bool e, bool s):State(c,e,s)
{
    state = "ReadyToUse";
}

void ReadyToUse::handle()
{
    cout << getState() << ": The rocket is now ready to be used" << endl;
}

State *ReadyToUse::update()
{
    return new InUse(getCore(),getEngine(),getSingle());
}