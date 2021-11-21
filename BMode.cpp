#include "BMode.h"
#include "Rocket.h"
#include "Starlink.h"
#include "Dragonsc.h"
#include "Crewdragon.h"

#include <iostream>

using namespace std;

BMode::BMode(){

}

BMode::~BMode(){
    
}

void BMode::run(Rocket* rocket){
    bool valid = false;
    int m = 1;
    while (valid == false){
        cout << "How many times would you like to run the simulation: ";
        cin >> m;
        if(m >= 1){
            valid = true;
        }
        else{
            cout<< endl << "Invalid input." << endl;
        }
    }

    Rocket* chain = new Starlink();
    chain->add(new CrewDragon());
    chain->add(new DragonSC());

    for(int i = 0; i < m; i++){
        chain->handleRequest(rocket);
    }

    delete chain;
}