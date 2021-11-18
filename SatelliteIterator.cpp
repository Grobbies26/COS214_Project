#include "SatelliteIterator.h"
#include "Node.h"

SatelliteIterator::SatelliteIterator(Node* head){
    first = head;
    current = first;
}

SatelliteIterator::~SatelliteIterator(){

}

bool SatelliteIterator::isFirst(){
    if (current == first){
        return true;
    }
    else{
        return false;
    }
}

Node* SatelliteIterator::firstSatellite(){
    return first;
}

Node* SatelliteIterator::currentSatellite(){
    return current;
}

Node* SatelliteIterator::nextSatellite(){
    current = current->next;
    return current;
}