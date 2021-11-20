#ifndef LINKS_H
#define LINKS_H

#include "Stars.h"
#include "SatelliteIterator.h"

using namespace std;

class Links : public Stars
{
    public:
        Links();
        ~Links();
        void add (Stars*);
        void remove();
        void setNext(Stars* s){}
        Stars* getHead();
        Stars* getNext();
        SatelliteIterator* createIterator(Stars*);
    private:
        Stars* head;
};

#endif