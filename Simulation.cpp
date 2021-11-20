#include "Simulation.h"
#include "SimBackup.h"
#include "Builder.h"
#include "ReadyToTest.h"

#include <iostream>

using namespace std;

Simulation :: Simulation()
{
    tmode = false;
    strategy = nullptr;
    ship = nullptr;
    state = nullptr;
}
    
Simulation::~Simulation(){
    if (state != nullptr){
        delete state;
    }
    if (strategy != nullptr){
        delete strategy;
    }
    if (ship != nullptr){
        delete ship;
    }
}
   
void Simulation :: runSim(){   
    bool happy = false;
    string r = "";
    if(tmode == true){
        while (happy == false){
            alterRocket();
            cout << "Would you like to change something(Y/N): ";
            cin >> r;
            if(r == "Y"){
                happy = false;
            }
            else if(r == "N"){
                happy = true;
            }
            else{
                cout << endl << "Invalid input" << endl;
            }
        }

        happy = false;
        while (happy == false){
            testRocket(ship->getRocket());
            cout << "Would you like to re-test the rocket(Y/N): ";
            cin >> r;
            if(r == "Y"){
                happy = false;
            }
            else if(r == "N"){
                happy = true;
            }
            else{
                cout << endl << "Invalid input" << endl;
            }
        }
    }
    else{
        testRocket(ship->getRocket());
    }
    
    ship->attachPayload();

    state = createSimBackup(strategy,ship,tmode);
    valid = false;
    r = "";
    while (valid == false){
        strategy->run(ship->getShip());
        cout << "Did an error occur in the simulation (Y,N): ";
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
       
    ship->getShip()->decommission();
}   
 
SimBackup* Simulation :: createSimBackup(Mode* m,Ship* s,bool b)
{
    return new SimBackup(m,s,b);
}

void Simulation :: setBackup(SimBackup* mem)
{
    state = mem;       
}

void Simulation::setMode(Mode* mode){
    strategy = mode;
}

void Simulation::setShip(Ship* ship){
    if(ship != nullptr){
        delete ship;
    }
    this->ship = ship;
}

void Simulation::isTMode(){
    tmode = true;
}

void Simulation::newShip(){
    Ship* ship = new Builder();

    bool valid = false;
    bool heavy = false;
    int m;

    while (valid == false){
        cout<<"Please select the payload type: \n\t1: Starlink \n\t2: Crew Dragon \n\t3: Dragon Space Craft"<<endl;
        cout<<"Enter 1,2,3: ";
        
        cin >> m;
        if(m < 4 && m > 0){
            valid = true;
        } 
        else{
            cout<< endl << "Invalid input." << endl;
        }
    }

    valid = false;
    while (valid == false && m != 1)
    {
        cout<<"Please select the rocket type: \n\t1: Heavy Falcon \n\t2: Falcon 9 "<<endl;
        cout<<"Enter 1,2: ";
        
        cin >> m;
        if(m == 1){
            heavy = true;
            valid = true;
        } 
        else if(m == 2){
            heavy = false;
            valid = true;
        }
        else{
            cout<< endl << "Invalid input." << endl;
        }
    }

    ship->createShip(heavy,m);

    this->setShip(ship);
}

void Simulation::alterRocket(){
    bool valid;
    string r = "";
    while (valid == false){
        cout << "Would you like to alter the rocket (Y/N): ";
        cin >> r;
        if(r == "Y"){
            valid = true;
        }
        else if(r == "N"){
            valid = false;
            return;
        }
        else{
            cout << endl << "Invalid input" << endl;
        }
    }

    newShip();
}

void Simulation::testRocket(Rocket* rocket){
    rocket->setState(new ReadyToTest(rocket->coreSystemCheck(),rocket->engineSystemCheck(),rocket->singleSystemCheck()));
    rocket->staticFire();
}

