#ifndef DRAGON_SC_CPP
#define DRAGON_SC_CPP

#include "Dragonsc.h"

DragonSC::DragonSC(): Payload( "DragonSC" ){}

void DragonSC::handleRequest(Rocket* r){
    if(r->getPayloadType() == "DragonSC"){
        cout << "DragonSC has arrived at the space station." << endl;
        deliver();
    }
    else{
        cout << "Incompatible payload. Request could not be handled by DragonSC."<<endl;
        Rocket::handleRequest(r);
    }
}

void DragonSC::deliver(){
    cout << "Cargo has been delivered to the space station" << endl;
}

#endif