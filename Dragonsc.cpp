#ifndef DRAGON_SC_CPP
#define DRAGON_SC_CPP

#include "Dragonsc.h"

DragonSC::DragonSC(): Payload( "DragonSC" ){}

DragonSC::~DragonSC(){}

void DragonSC::handleRequest(Rocket* r){
    if(r->getPayloadType() == "DragonSC"){
        cout << "DragonSC has arrived at the space station." << endl;
        deliver();
    }
    else{
        cout << "Incompatible payload. Request could not be handled by DragonSC."<<endl;
        getSuccessor()->handleRequest(r);
    }
}

void DragonSC::deliver(){
    cout << "\tCargo has been delivered to the space station" << endl;
}

#endif