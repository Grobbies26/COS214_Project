#include <iostream>
#include "Falcon9DragonSC.h"

using namespace std;

Rocket* Falcon9DragonSC::createRocket(){
    return new Falcon9();
}

Rocket* Falcon9DragonSC::createPayload(){
    return new DragonSC();
}