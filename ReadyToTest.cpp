#include "ReadyToTest.h"
#include "Testing.h"
#include <iostream>
#include <string>

using namespace std;

ReadyToTest::ReadyToTest(Rocket* roc):State(roc)
{
    state = "ReadyToTest";
}

void ReadyToTest::handle()
{
    cout << getState() <<": The rocket is now going in for testing" << endl;
}

State *ReadyToTest::update()
{
    return new Testing(getRocket());
}