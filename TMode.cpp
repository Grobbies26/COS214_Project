#include "TMode.h"
#include "Rocket.h"
#include "Starlink.h"
#include "Dragonsc.h"
#include "Crewdragon.h"

TMode::TMode(Rocket* roc):Mode(roc){

}

TMode::~TMode(){
    
}

void TMode::run(Rocket* rocket){
    Rocket* chain = new Starlink();
    chain->add(new CrewDragon());
    chain->add(new DragonSC());

    chain->handleRequest(rocket);

    delete chain;
}