#include <iostream>
#include "HeavyFalconDragonSC.h"

using namespace std;

Rocket* HeavyFalconDragonSC::createRocket(){
    return new HeavyFalcon();
}

Rocket* HeavyFalconDragonSC::createPayload(){
    return new DragonSC();
}