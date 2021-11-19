#include "Testing.h"
#include <iostream>

using namespace std;

Testing::Testing()
{
    state = "Testing";
}

void Testing::handle()
{
    cout << "The rocket has been tested and is ready to use" << endl;
}

State *Testing::update()
{
    return new ReadyToUse();
}