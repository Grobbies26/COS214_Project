#include <iostream>
#include "Falcon9DragonSC.h"
#include "DragonSC.h"
#include "Falcon9.h"

using namespace std;

Rocket* Falcon9DragonSC::createRocket(){
    return new Falcon9();
}

Rocket* Falcon9DragonSC::createPayload(){
    return new DragonSC();
}