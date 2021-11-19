#include "Simulation.h"
#include "NMode.h"
#include "TMode.h"
#include "Builder.h"

#include <iostream>

void setUpStrategy(Simulation*);
void setUpShip(Simulation*);

int main(){
    Simulation* simulation = new Simulation();
    setUpStrategy(simulation);
    setUpShip(simulation);

    //save sim backup always

    simulation->runSim();

    delete simulation;

    return 0;
}

void setUpStrategy(Simulation* sim){
    bool valid = false;
    int m;
    while (valid == false)
    {
        cout<<"Please select a mode to run in: \n\t1: Test Mode \n\t2: Normal Mode \n\t3: Batch Mode"<<endl;
        cout<<"Enter 1,2,3: ";
        
        cin >> m;
        if(m < 4 && m > 0){
            valid = true;
        } 
        else{
            cout<< endl << "Invalid input." << endl;
        }
    }

    switch (m)
    {
    case 1:
        sim->setMode(new TMode());
        sim->isTMode();
        break;
    case 2:
        
        sim->setMode(new NMode(false));
        break;
    case 3:
        sim->setMode(new NMode(true));
        break;
    }

    return;
}

void setUpShip(Simulation* sim){
    Ship* ship = new Builder();

    bool valid = false;
    bool heavy = false;
    int m;

    while (valid == false)
    {
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
            heavy == true;
            valid = true;
        } 
        else if(m == 2){
            heavy == false;
            valid == true;
        }
        else{
            cout<< endl << "Invalid input." << endl;
        }
    }

    ship->createShip(heavy,m);

    sim->setShip(ship);

    return;
}