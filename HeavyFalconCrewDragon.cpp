#include <iostream>
#include "HeavyFalconCrewDragon.h"
#include "Heavyfalcon.h"
#include "CrewDragon.h"

using namespace std;

HeavyFalconCrewDragon::HeavyFalconCrewDragon(){
    cout << "b" << endl;
}

HeavyFalconCrewDragon::~HeavyFalconCrewDragon(){

}

Rocket* HeavyFalconCrewDragon::createRocket(){
    return new HeavyFalcon();
}

Rocket* HeavyFalconCrewDragon::createPayload(){
    return new CrewDragon();
}