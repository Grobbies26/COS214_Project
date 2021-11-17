#ifndef DRAGON_SC_CPP
#define DRAGON_SC_CPP

#include "dragonsc.h"

DragonSC::DragonSC():Payload(){

}

void DragonSC::handleRequest(Rocket* r){
    if(r->getPayloadType() == "DragonSC"){
        cout << "DragonSC initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by DragonSC."<<endl;
        Rocket::handleRequest(r);
    }
}

#endif