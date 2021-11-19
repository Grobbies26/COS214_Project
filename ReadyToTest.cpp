#include "ReadyToTest.h"
#include <iostream>

using namespace std;

ReadyToTest::ReadyToTest()
{
    state = "ReadyToTest";
}

void ReadyToTest::handle()
{
    cout << "The rocket is now going in for testing" << endl;
}

State *ReadyToTest::update()
{
    return new Testing();
}