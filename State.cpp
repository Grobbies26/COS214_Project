#include "State.h"
#include "Rocket.h"
#include <iostream>

using namespace std;

State::State(){
    rocket = nullptr;
}

State::State(Rocket* roc){
    rocket = roc;
}

State::~State(){
    
}

string State::getState(){
    return state;
}

void State::setState(string s){
    state = s;
}

Rocket* State::getRocket(){
    return rocket;
}