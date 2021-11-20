#include "TMode.h"
#include "Rocket.h"
#include "Starlink.h"
#include "Dragonsc.h"
#include "Crewdragon.h"

TMode::TMode(){

}

TMode::~TMode(){
    
}

void TMode::run(Rocket* rocket){
    Rocket* chain = new Starlink();
    chain->add(new CrewDragon());
    chain->add(new DragonSC());

    bool valid = false;
    string r = "";
    while (valid == false){
        chain->handleRequest(rocket);
        cout << "Would you like to repeat the process(Y/N): ";
        cin >> r;
        if(r == "Y"){
            valid = false;
        }
        else if(r == "N"){
            valid = true;
        }
        else{
            cout << endl << "Invalid input" << endl;
        }

    }   
    chain->handleRequest(rocket);

    delete chain;
}