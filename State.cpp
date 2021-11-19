#include "State.h"
#include <iostream>

using namespace std;

State::~State(){
    delete state;
}

string State::getState(){
    return state;
}

void State::setState(string s){
    state = s;
}