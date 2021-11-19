#ifndef CREW_DRAGON_CPP
#define CREW_DRAGON_CPP

#include "Crewdragon.h"

CrewDragon::CrewDragon(): Payload( "CrewDragon" ){
    this->engine = new SingleVacuumMerlin();
    this->engine->startEngine();
}

CrewDragon::~CrewDragon(){
    delete this->engine;
    this->engine = 0;
}

void CrewDragon::handleRequest(Rocket* r){
    if(r->getPayloadType() == "CrewDragon"){
        cout << "CrewDragon initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by CrewDragon."<<endl;
        Rocket::handleRequest(r);
    }
}

SingleVacuumMerlin* CrewDragon::getEngine(){
    return this->engine;
}

bool CrewDragon::engineSystemCheck(){
    return this->engine->isActive();
}

#endif