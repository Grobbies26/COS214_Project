#include "Node.h"
#include "SpaceXObserver.h"
#include "SpaceXUser.h"
#include "ABSLaser.h"
#include <iostream>

Node::Node(){
    status = "operational";  // states are operational, unstable, critical
}

Node::~Node(){
    
}

void Node::setNext(Stars* s){
    next = s;
}

Stars* Node::getNext(){
    return next;
}

void Node::attachUser(SpaceXObserver* sxu){
    SXUserlist.push_back(sxu);
}

string Node::getState(){
    return status;
}

void Node::sendRadioSignal(){
   vector<SpaceXObserver*>::iterator it = SXUserlist.begin();
    for (it = SXUserlist.begin(); it != SXUserlist.end(); ++it){
        (*it)->update();

    }
}

void Node::setState(string s){
    status = s;
}


void Node::statusChanged(ABSLaser* l){
    laser = l;
    laser->notify(this->getState());
}

void Node::LaserCommunication(string nodeStatus){
    cout<<"A node in the system has changed it's status to " << nodeStatus << ", notifying all other Starlink nodes in the system."<<endl;
}