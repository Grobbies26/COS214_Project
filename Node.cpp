#include "Node.h"

Node::Node(){}

Node::~Node(){}

void Node::setNext(Stars* s){
    next = s;
}

Stars* Node::getNext(){
    return next;
}

void Node::attachUser(SpaceXObserver* sxu){
    SXUserlist.push_back(sxu);
}

void Node::detachUser(SpaceXObserver* sxu){
    bool found = false;
    vector<SpaceXObserver*>::iterator it = SXUserlist.begin();

    while ((it != SXUserlist.end()) && (!found)) {
        if (*it == sxu) {
            found = true;
            SXUserlist.erase(it);
        }
        ++it;
    }
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


void Node::statusChanged(){

}