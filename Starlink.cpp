#include <iostream>
#include <vector>
#include "Starlink.h"
#include "Rocket.h"

using namespace std;

Starlink::Starlink():Payload("Starlink"){
    
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