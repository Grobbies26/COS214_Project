#include <iostream>
#include "Falcon9Starlink.h"

using namespace std;

Rocket* Falcon9Starlink::createRocket(){
    return new Falcon9();
}

Rocket* Falcon9Starlink::createPayload(){
    return new Starlink();
}