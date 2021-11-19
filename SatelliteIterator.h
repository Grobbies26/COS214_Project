#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include "Stars.h"

class SatelliteIterator{
    private:
        Stars* first;
        Stars* current;
    public:
        SatelliteIterator(Stars*);
        ~SatelliteIterator();
        Stars* currentSatellite();
        Stars* nextSatellite();
        Stars* firstSatellite();
        boolean hasNext();
};

#endif