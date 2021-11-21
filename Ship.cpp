#include "Ship.h"
#include "Rocket.h"

Ship::Ship(){
    ship = nullptr;
    rocket = nullptr;
    payload = nullptr;
}

Ship::~Ship(){
    if (ship != nullptr){
        delete ship;
        ship = nullptr;
    }
}

Rocket* Ship::getRocket(){
    return rocket;
}

void Ship::setRocket(Rocket* roc){
    rocket = roc;
}

Rocket* Ship::getPayload(){
    return payload;
}

void Ship::setPayload(Rocket* roc){
    payload = roc;
}

Rocket* Ship::getShip(){
    return ship;
}

void Ship::setShip(Rocket* roc){
    ship = roc;
}

void Ship::attachPayload(){
    payload->attach(rocket);
    ship = payload;
}