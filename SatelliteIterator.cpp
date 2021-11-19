#include "SatelliteIterator.h"
#include "Node.h"

SatelliteIterator::SatelliteIterator(Stars* head){
    first = head;
    current = first;
}

SatelliteIterator::~SatelliteIterator(){

}

boolean SatelliteIterator::hasNext(){
    if (current->getNext()){
        return true;
    }
    else{
        return false;
    }
}

Stars* SatelliteIterator::firstSatellite(){
    return first;
}

Stars* SatelliteIterator::currentSatellite(){
    return current;
}

Stars* SatelliteIterator::nextSatellite(){
    current = current->next;
    return current;
}