#include "Builder.h"
#include "Ship.h"
#include "Rocket.h"

Builder::Builder():Ship(){
    
}

Builder::~Builder(){
    if (rocket != nullptr){
        delete rocket;
    }
}

Rocket* Builder::createShip(){
    //Temp Stub
}