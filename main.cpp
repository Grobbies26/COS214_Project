#include "Simulation.h"
#include "NMode.h"
#include "TMode.h"
#include "BMode.h"

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
        
        sim->setMode(new NMode());
        break;
    case 3:
        sim->setMode(new BMode());
        break;
    }

    return;
}

void setUpShip(Simulation* sim){
    sim->newShip();
}