#include <iostream>
#include "SpaceXUser.h"
using namespace std;

SpaceXUser::SpaceXUser(string n, Stars* s){
    name = n;
    star = s;
}

void SpaceXUser::update(){
    if (star->getState() == "operational")
    {
         cout<< name << " reacts with speed and returns the Starlink node back to an operational state." <<endl;
    }else{
         cout<< name << " notices that a Starlink node satelite's state has changed to "<< star->getState()<<" and starts to work towards making the Starlink operational again." <<endl;
    }
    
   
}