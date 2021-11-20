#include "State.h"
#include "Rocket.h"
#include <iostream>

using namespace std;

State::State(){
    core = false;
    engine = false;
    single = false;
}

State::State(bool c, bool e, bool s){
    core = c;
    engine = e;
    single = s;
}

State::~State(){
    
}

string State::getState(){
    return state;
}

void State::setState(string s){
    state = s;
}

bool State::getSingle(){
    return single;
}

bool State::getCore(){
    return core;
}

bool State::getEngine(){
    return engine;
}