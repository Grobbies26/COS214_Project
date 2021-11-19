#ifndef DRAGON_SC_CPP
#define DRAGON_SC_CPP

#include "Dragonsc.h"

DragonSC::DragonSC(): Payload( "DragonSC" ){}

void DragonSC::handleRequest(Rocket* r){
    if(r->getPayloadType() == "DragonSC"){
        cout << "DragonSC initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by DragonSC."<<endl;
        Rocket::handleRequest(r);
    }
}

SingleVacuumMerlin* DragonSC::getEngine(){
    return this->engine;
}

bool DragonSC::engineSystemCheck(){
    return this->engine->isActive();
}

#endif