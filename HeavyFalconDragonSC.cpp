#include <iostream>
#include "HeavyFalconDragonSC.h"
#include "HeavyFalcon.h"
#include "Dragonsc.h"

using namespace std;

Rocket* HeavyFalconDragonSC::createRocket(){
    return new HeavyFalcon();
}

Rocket* HeavyFalconDragonSC::createPayload(){
    return new DragonSC();
}