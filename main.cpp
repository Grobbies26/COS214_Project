#include "Simulation.h"
#include "NMode.h"
#include "TMode.h"
#include "Builder.h"

#include <iostream>

void setUpStrategy(Simulation*);
void setUpShip();

int main(Simulation*){
    Simulation* simulation = new Simulation();
    setUpStrategy(simulation);
    setUpShip(simulation);

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

    valid = false;
    while(valid == false && m != 1){
        cout<<"Would you like to store the simualtion: "<<endl;
        cout<<"Enter Y,N: ";
        string a = "";
        cin >> a;
        if(a == "Y"){
            valid = true;
        } 
        else if(a == "N"){
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
        break;
    case 2:
        
        sim->setMode(new NMode(false));
        break;
    case 3:
        sim->setMode(new NMode(true));
        break;
    default:
        break;
    }

    return;
}

void setUpShip(Simulation* sim){
    Builder* rocket = new Builder();

    
}