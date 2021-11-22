#ifndef MERLINE_ENGINE_CPP
#define MERLINE_ENGINE_CPP

#include "Merlinengine.h"

MerlinEngine::MerlinEngine(){
    this->ready = false;
}

void MerlinEngine::startEngine(){
    this->ready = true;
}

void MerlinEngine::stopEngine(){
    this->ready = false;
}

bool MerlinEngine::isActive(){
    return this->ready;
}


#endif