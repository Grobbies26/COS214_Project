#include "Rocket.h"
#include "SingleVacuumMerlin.h"
#include <iostream>

using namespace std;

Rocket::Rocket(string p)
{
    successor = nullptr;
    payloadType = p;
    single = new SingleVacuumMerlin();
    single->startEngine();
}

Rocket::~Rocket()
{
    if (state != nullptr){
        delete state;
    }
    if(successor != nullptr){
        delete successor;
    }
    if(single != nullptr){
        delete single;
    }
}

void Rocket::decommission(){
    setState(new Decommissioned());
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

Falcon9Core* Rocket::getCore( int index ){
    return 0x0;
}

Falcon9Core* Rocket::getCore(){
    return 0x0;
}

MerlinEngine* Rocket::getEngine( int index ){
    return 0x0;
}

bool Rocket::coreSystemCheck(){
    return false;
}

bool Rocket::engineSystemCheck(){
    return false;
}

bool Rocket::singleSystemCheck(){
    return this->single->isActive();
}

MerlinEngine* Rocket::getSingle(){
    return single;
}

void Rocket::setState(State* s){
    if(state != nullptr){
        delete state;
    }
    state = s;
}

void Rocket::staticFire(){
    while(state->getState() != "InUse"){
        state->handle();
        state = state->update();
    }
    state->handle();
    state = state->update();
}
