#include "State.h"
#include <iostream>

using namespace std;

State::~State(){
    
}

string State::getState(){
    return state;
}

void State::setState(string s){
    state = s;
}