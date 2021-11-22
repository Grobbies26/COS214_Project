#ifndef PAYLOAD_CPP
#define PAYLOAD_CPP

#include "Payload.h"

Payload::Payload(string s):Rocket(s){}

Payload::~Payload(){
    if(rocket != nullptr){
        delete rocket;
    }
    rocket = 0;
}

void Payload::attach(Rocket* roc){
    rocket = roc;
}

#endif