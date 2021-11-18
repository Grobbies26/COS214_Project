#ifndef PAYLOAD_CPP
#define PAYLOAD_CPP

#include "Payload.h"

Payload::Payload(string s):Rocket(s){}

Payload::~Payload(){
    rocket = 0;
}

#endif