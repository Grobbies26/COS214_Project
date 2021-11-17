#include "Ship.h"
#include "Rocket.h"

Ship::Ship(){
    rocket = nullptr;
}

Ship::~Ship(){
    if (rocket != nullptr){
        delete rocket;
        rocket = nullptr;
    }
}

Rocket* Ship::getRocket(){
    return rocket;
}

Ship::setRocket(Rocket* roc){
    rocket = roc;
}