#include "Refurbishing.h"
#include <iostream>

using namespace std;

Refurbishing::Refurbishing()
{
    state = "Refurbishing";
}

void Refurbishing::handle()
{
    cout << "The rocket has been used and is now getting refurbished" << endl;
}

State *Refurbishing::update()
{
    return new ReadyToTest();
}