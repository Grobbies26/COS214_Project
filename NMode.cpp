#include "NMode.h"
#include "BMode.h"
#include "Rocket.h"
#include "Starlink.h"
#include "Dragonsc.h"
#include "Crewdragon.h"

NMode::NMode(bool b,Rocket* roc):Mode(roc){
    batch = b;
}

NMode::~NMode(){
    
}

void NMode::run(Rocket* rocket){
    //Temp stub
    if(batch == true){
        Mode* bat = new BMode(rocket);

        bat->run(rocket);

        delete bat;
        return;
    }

    Rocket* chain = new Starlink();
    chain->add(new CrewDragon());
    chain->add(new DragonSC());

    chain->handleRequest(rocket);

    delete chain;
}