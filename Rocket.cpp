#include "Rocket.h"
#include <iostream>

using namespace std;

Rocket::Rocket()
{

}

~Rocket()
{
    
}

State *getState()
{
    return state;
}

void setState(State *s)
{
    state = s;
}