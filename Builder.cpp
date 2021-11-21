#include "Builder.h"
#include "Ship.h"
#include "Rocket.h"
#include "RocketFactory.h"
#include "Falcon9Starlink.h"
#include "Falcon9DragonSC.h"
#include "Falcon9CrewDragon.h"
#include "HeavyFalconDragonSC.h"
#include "HeavyFalconCrewDragon.h"


Builder::Builder():Ship(){
    
}

Builder::~Builder(){
   
}

void Builder::createShip(bool heavy,int pay){
    Rocket* rocket;
    Rocket* payload;
    RocketFactory* RF;
    if (heavy == true){
        switch (pay)
        {
        case 1:
            RF = new HeavyFalconCrewDragon();
            break;
        case 2:
            RF = new HeavyFalconDragonSC();
            break;
        }
    }
    else{
        switch (pay)
        {
        case 1:
            RF = new Falcon9Starlink();
            break;
        case 2:
            RF = new Falcon9CrewDragon();
            break;
        case 3:
            RF = new Falcon9DragonSC();
            break;
        }
    }

    rocket = RF->createRocket();
    payload = RF->createPayload();
    setRocket(rocket);
    setPayload(payload);
    cout << "1" << endl;
    delete RF;
}