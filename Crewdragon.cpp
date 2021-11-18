#ifndef CREW_DRAGON_CPP
#define CREW_DRAGON_CPP

#include "Crewdragon.h"

CrewDragon::CrewDragon(): Payload( "CrewDragon" ){}

void CrewDragon::handleRequest(Rocket* r){
    if(r->getPayloadType() == "CrewDragon"){
        cout << "CrewDragon initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by CrewDragon."<<endl;
        Rocket::handleRequest(r);
    }
}

#endif