#ifndef CREW_DRAGON_CPP
#define CREW_DRAGON_CPP

#include "Crewdragon.h"

#include <iostream>

CrewDragon::CrewDragon(): Payload( "CrewDragon" ){

}

CrewDragon::~CrewDragon(){

}

void CrewDragon::handleRequest(Rocket* r){
    if(r->getPayloadType() == "CrewDragon"){
        cout << "CrewDragon has arrived at the space station." << endl;
        deliver();
    }
    else{
        cout << "Incompatible payload. Request could not be handled by CrewDragon."<<endl;
        getSuccessor()->handleRequest(r);
    }
}

void CrewDragon::deliver(){
    cout << "\tCrew has safely arrived at the space station" << endl;
    cout << "\tCargo has been delivered to the space station" << endl;
}

#endif