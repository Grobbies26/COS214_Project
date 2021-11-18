#include <iostream>
#include "HeavyFalconCrewDragon.h"
#include "Heavyfalcon.h"
#include "CrewDragon.h"

using namespace std;

Rocket* HeavyFalconCrewDragon::createRocket(){
    return new HeavyFalcon();
}

Rocket* HeavyFalconCrewDragon::createPayload(){
    return new CrewDragon();
}