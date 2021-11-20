#include "Testing.h"
#include "Refurbishing.h"
#include <iostream>
#include <string>

using namespace std;

Testing::Testing()
{
    state = "Testing";
}

void Testing::handle()
{
    cout << getState() << ": The rocket is now being tested" << endl;
}

State *Testing::update()
{
    return new Refurbishing();
}