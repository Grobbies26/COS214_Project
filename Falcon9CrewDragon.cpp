#include <iostream>
#include "Falcon9CrewDragon.h"

using namespace std;

Rocket* Falcon9CrewDragon::createRocket(){
    return new Falcon9();
}

Rocket* Falcon9CrewDragon::createPayload(){
    return new CrewDragon();
}