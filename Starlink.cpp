#include <iostream>
#include <vector>
#include "Starlink.h"
#include "../abstract/payload.h"
#include "Rocket.h"

using namespace std;

Starlink::Starlink():Payload(){
    
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