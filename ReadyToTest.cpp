#include "ReadyToTest.h"
#include "Testing.h"
#include <iostream>
#include <string>

using namespace std;

ReadyToTest::ReadyToTest(bool c, bool e, bool s):State(c,e,s)
{
    state = "ReadyToTest";
}

void ReadyToTest::handle()
{
    cout << getState() <<": The rocket is now going in for testing" << endl;
}

State *ReadyToTest::update()
{
    return new Testing(getCore(),getEngine(),getSingle());
}