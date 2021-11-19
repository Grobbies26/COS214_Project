#include "NMode.h"
#include "BMode.h"
#include "Rocket.h"
#include "Starlink.h"
#include "Dragonsc.h"
#include "Crewdragon.h"

NMode::NMode(){
}

NMode::~NMode(){
    
}

void NMode::run(Rocket* rocket){
    Rocket* chain = new Starlink();
    chain->add(new CrewDragon());
    chain->add(new DragonSC());

    chain->handleRequest(rocket);

    delete chain;
}