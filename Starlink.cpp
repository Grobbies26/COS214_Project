#include <iostream>
#include <vector>
#include <random>
#include "Starlink.h"
#include "Rocket.h"
#include "Links.h"
#include "Node.h"
#include "SpaceXObserver.h"
#include "SpaceXUser.h"
#include "Stars.h"
#include "ABSLaser.h"
#include "Laser.h"

using namespace std;

Starlink::Starlink():Payload("Starlink"){
    network = new Links();
    int a = 10 + (rand()%(60-10+1));
    for (int i = 0; i < a; i++){
        network->add(new Node());
    }
}

void Starlink::handleRequest(Rocket* r){
    if(r->getPayloadType() == "Starlink"){
        cout << "Starlink has arrived at desired orbit." << endl;
        deliver();
    }
    else{
        cout << "Incompatible payload. Request could not be handled by Starlink."<<endl;
        getSuccessor()->handleRequest(r);
    }
}

void Starlink::deliver(){
    cout << "Beginning to spread out over area:" << endl;
    Stars* head = network->getHead();
    SpaceXObserver* ob1 = new SpaceXUser("Obi wan",head);
    SpaceXObserver* ob2 = new SpaceXUser("Kenobi",head);
    SpaceXObserver* ob3 = new SpaceXUser("General Greevus",head);
    head->attachUser(ob1,0);
    head->attachUser(ob2,1);
    head->attachUser(ob3,2);
    cout << "\n\t1\n\t2\n\t3\tAll satellites are in position." <<endl;
    ABSLaser* laser = new Laser(network);

    cout << "Issue encountered." <<endl;

    head->setState("unstable");
    head->sendRadioSignal();
    head->statusChanged(laser);
    
    cout << "Issue has been resolved by technician." <<endl;

    head->setState("operational");
    head->sendRadioSignal();
    head->statusChanged(laser);
    
    delete laser;
}