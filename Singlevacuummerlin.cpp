#ifndef SINGLE_VACUUM_MERLIN_CPP
#define SINGLE_VACUUM_MERLIN_CPP

#include "Singlevacuummerlin.h"

SingleVacuumMerlin::SingleVacuumMerlin(){
    this->ready = false;
}

void SingleVacuumMerlin::startEngine(){
    this->ready = true;
}

void SingleVacuumMerlin::stopEngine(){
    this->ready = false;
}

bool SingleVacuumMerlin::isActive(){
    return this->ready;
}

#endif