#ifndef FALCON_NINE_CORE_CPP
#define FALCON_NINE_CORE_CPP

#include "falcon9core.h"

Falcon9Core::Falcon9Core(){
    this->ready = false;
}

void Falcon9Core::startEngine(){
    this->ready = true;
}

void Falcon9Core::stopEngine(){
    this->ready = false;
}

bool Falcon9Core::isActive(){
    return this->ready;
}

#endif