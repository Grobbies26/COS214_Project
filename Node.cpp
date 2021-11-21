#include "Node.h"
#include "SpaceXObserver.h"
#include "SpaceXUser.h"
#include "ABSLaser.h"
#include <iostream>

Node::Node(){
    status = "operational";  // states are operational, unstable, critical
    SXUserlist = new SpaceXObserver*[3];
}

Node::~Node(){
    for(int i = 0; i < 3;i++){
        delete SXUserlist[i];
    }
    delete [] SXUserlist;
}

void Node::setNext(Stars* s){
    next = s;
}

Stars* Node::getNext(){
    return next;
}

void Node::attachUser(SpaceXObserver* sxu,int i){
    SXUserlist[i]=sxu;
}

string Node::getState(){
    return status;
}

void Node::sendRadioSignal(){
    for(int i = 0;i < 3; i++){
        SXUserlist[i]->update();
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