#include <iostream>
#include <vector>
#include "Starlink.h"

using namespace std;

void Starlink::attachUser(SpaceXUser* sxu){

}

void Starlink::detachUser(SpaceXUser* sxu){

}

string Starlink::getState(){
    return status;
}

void Starlink::sendRadioSignal(){

}

void Starlink::setState(string s){
    status = s;
}


void Starlink::statusChanged(){

}