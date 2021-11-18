#include <iostream>
#include <vector>
#include "Starlink.h"
#include "Payload.h"
#include "Rocket.h"

using namespace std;

Starlink::Starlink():Payload( "Starlink" ){
    
}

void Starlink::attachUser(SpaceXUser* sxu){

}

void Starlink::detachUser(SpaceXUser* sxu){

}

string Starlink::getState(){
    return status;
}

void Starlink::sendRadioSignal(){

}

void Starlink::setState(string s){
    status = s;
}


void Starlink::statusChanged(){

}

void Starlink::handleRequest(Rocket* r){
    if(r->getPayloadType() == "Starlink"){
        cout << "Starlink initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by Starlink."<<endl;
        Rocket::handleRequest(r);
    }
}