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
    
}

State *getState()
{
    return this->state;
}

void setState(State *s)
{
    this->state = s;
}

void Rocket::handleRequest(string s){
    if(getSuccessor()==nullptr){
        cout << "Request could not be handled." << endl;
    }
    else{
        getSuccessor()->handleRequest(s);
    }
}

void Rocket::add(Rocket* rckt){
    if(successor == nullptr){
        successor = rckt;
    }
    else{
        successor->add(rckt);
    }
}

Rocket* Rocket::getSuccessor(){
    return successor;
}

void Rocket::setSuccessor(Rocket* r){
    successor = r;
}

string Rocket::getPayloadType(){
    return payloadType;
}