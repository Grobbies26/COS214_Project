#include "Rocket.h"
#include <iostream>

using namespace std;

Rocket::Rocket(string p)
{
    successor = nullptr;
    payloadType = p;
}

Rocket::~Rocket()
{
}

void Rocket::change()
{
    if (state->getState() == "Decommissioned"){
        state->handle();
    } else {
        state->handle();
        state = state->update();
    }
}

void Rocket::decommission(){
    state->setState(new Decommissioned());
    state->handle();
}

void Rocket::handleRequest(Rocket *r)
{
    if (r->getSuccessor() == nullptr)
    {
        cout << "Request could not be handled." << endl;
    }
    else
    {
        getSuccessor()->handleRequest(r);
    }
}

void Rocket::add(Rocket *rckt)
{
    if (successor == nullptr)
    {
        successor = rckt;
    }
    else
    {
        successor->add(rckt);
    }
}

Rocket *Rocket::getSuccessor()
{
    return successor;
}

void Rocket::setSuccessor(Rocket *r)
{
    successor = r;
}

string Rocket::getPayloadType()
{
    return payloadType;
}