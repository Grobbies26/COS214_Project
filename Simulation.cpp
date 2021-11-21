#include "Simulation.h"
#include "SimBackup.h"
#include "Builder.h"
#include "ReadyToTest.h"
#include "Testmode.h"
#include "Normalmode.h"
#include "Storesim.h"
#include "launch.h"


#include <iostream>

using namespace std;

Simulation :: Simulation()
{
    tmode = false;
    strategy = nullptr;
    ship = nullptr;
    state = new SimStore();
    list = new Button*[4];
}
    
Simulation::~Simulation(){
    
}
   
void Simulation :: runSim(){ 
    setButtons();
    if(tmode == true){
        list[0]->press();
    }
    else{
        list[1]->press();
    }


    cout << "Simulation completed successfully" << endl;
}   

SimBackup* Simulation :: createSimBackup(Mode* m,Ship* s,bool b)
{
    return new SimBackup(m,s,b);
}

void Simulation::setMode(Mode* mode){
    strategy = mode;
}

void Simulation::setShip(Ship* s){
    if(ship != nullptr){
        delete ship;
    }
    this->ship = s;
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

    int n = 2;
    valid = false;
    while (valid == false && m != 1)
    {
        cout<<"Please select the rocket type: \n\t1: Heavy Falcon \n\t2: Falcon 9 "<<endl;
        cout<<"Enter 1,2: ";
        
        cin >> n;
        if(n == 1){
            heavy = true;
            valid = true;
        } 
        else if(n == 2){
            heavy = false;
            valid = true;
        }
        else{
            cout<< endl << "Invalid input." << endl;
        }
    }

    ship->createShip(heavy,n);

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

void Simulation::setButtons(){
    list[0] = new Button(new TestMode(this));
    list[1] = new Button(new NormalMode(this));
    list[2] = new Button(new StoreSim(this));
    list[3] = new Button(new Launch(this));
}

void Simulation::tm(){
    bool happy = false;
    bool done = false;
    string r = "";
    while(tmode == true && done == false){
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

        ship->attachPayload();

        list[2]->press();
        bool valid = false;
        r = "";
        while (valid == false){
            list[3]->press();
            cout << "Did an error occur in the launch procedure(Y,N): ";
            cin >> r;
            if(r == "Y"){
                valid = false;
                SimBackup* backup = state->getMemento();
                ship = backup->getShip();
                strategy = backup->getMode();
                tmode = backup->getTMode();
            }
            else if(r == "N"){
                valid = true;
            }
            else{
                cout << endl << "Invalid input" << endl;
            }
        }     
        ship->getShip()->decommission();
        valid = false;
        r = "";
        while (valid == false){
            cout << "Are you prepared to run a real simulation (Y,N): ";
            cin >> r;
            if(r == "Y"){
                valid = true;
                done = true;
                
            }
            else if(r == "N"){
                valid = true;
            }
            else{
                cout << endl << "Invalid input" << endl;
            }
        }
    }
    list[1]->press();
}

void Simulation::nm(){
    testRocket(ship->getRocket());
    
    if(!tmode){
        ship->attachPayload();
    }
    
    list[2]->press();
    list[3]->press();
    ship->getShip()->decommission();

    cout << "Simulation completed successfully" << endl;
}

Mode* Simulation::getStrat(){
    return strategy;
}

SimStore* Simulation::getBack(){
    return state;
}

Ship* Simulation::getShip(){
    return ship;
}

bool Simulation::getTmode(){
    return tmode;
}

void Simulation::setBack(SimBackup* sb){
    state->setMemento(sb);
}