#ifndef ROCKET_CPP
#define ROCKET_CPP

#include "rocket.h"

Rocket::Rocket(){
    // TO DO
}

Rocket::~Rocket(){
    // TO DO
}

void Rocket::change(){
    // TO DO
}

State* Rocket::getState(){
    return this->state;
}

void Rocket::setState( State* state ){
    this->state = state;
}

#endif