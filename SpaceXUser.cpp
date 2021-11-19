#include <iostream>
#include "SpaceXUser.h"
using namespace std;

SpaceXUser::SpaceXUser(string n, Starlink* s){
    name = n;
    starlink = s;
}

void SpaceXUser::update(){
    if (starlink->getState() == "operational")
    {
         cout<< name << " reacts with speed and returns the Starlink back to an operational state." <<endl;
    }else{
         cout<< name << " notices that a Starlink's state has changed to "<< starlink->getState()<<" and starts to work towards making the Starlink operational again." <<endl;
    }
    
   
}