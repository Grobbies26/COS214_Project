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
        Rocket::handleRequest(r);
    }
}

void Starlink::deliver(){
    cout << "" << endl;
    Stars* head = network->getHead();
    SpaceXObserver* ob1 = new SpaceXUser("Obi wan",head);
    SpaceXObserver* ob2 = new SpaceXUser("Kenobi",head);
    SpaceXObserver* ob3 = new SpaceXUser("General Greevus",head);
    head->attachUser(ob1);
    head->attachUser(ob2);
    head->attachUser(ob3);

    head->st
}