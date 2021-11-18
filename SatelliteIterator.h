#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include "Node.h"

class SatelliteIterator{
    private:
        Node* first;
        Node* current;
    public:
        SatelliteIterator(Node*);
        ~SatelliteIterator();
        Node* currentSatellite();
        Node* nextSatellite();
        Node* firstSatellite();
        bool isFirst();
};

#endif