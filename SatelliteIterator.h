#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include "Node.h"

class SatelliteIterator{
    public:
        SatelliteIterator();
        virtual ~SatelliteIterator();
        Node* currentSatellite();
        Node* nextSatellite();
        Node* firstSatellite();
        boolean isFirst();
};

#endif