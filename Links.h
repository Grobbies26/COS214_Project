#ifndef LINKS_H
#define LINKS_H

#include "Stars.h"
#include "SatelliteIterator.h"

using namespace std;

class Links : public Stars
{
    private:
    Stars* head;

    public:
    Links();
    ~Links();

    void add (Stars*);
    void remove();

    void setNext(Stars* s){}
    
    Stars* getNext(){
        return nullptr;
    }

   // Stars* getchild();

    SatelliteIterator* createIterator(Stars*);




};

#endif