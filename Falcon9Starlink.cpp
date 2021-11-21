#include <iostream>
#include "Falcon9Starlink.h"
#include "Falcon9.h"
#include "Starlink.h"

using namespace std;

Falcon9Starlink::Falcon9Starlink(){

}

Falcon9Starlink::~Falcon9Starlink(){
    
}

Rocket* Falcon9Starlink::createRocket(){
    return new Falcon9();
}

Rocket* Falcon9Starlink::createPayload(){
    return new Starlink();
}