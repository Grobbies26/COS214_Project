#ifndef NODE_H
#define NODE_H

#include "Stars.h"
#include <vector>
#include "SpaceXObserver.h"
#include "ABSLaser.h"

class Node : public Stars
{
    public:
        Node();
        ~Node();
        void setNext(Stars*);
        Stars* getNext();
        void attachUser(SpaceXObserver*);
        string getState();
        void sendRadioSignal();        
        void setState(string);
        void statusChanged(ABSLaser*);
        void LaserCommunication(string);
        void add(Stars* s){}
        void remove(){}
    private:
        Stars* next;
        string status;
        vector<SpaceXObserver*> SXUserlist;
        ABSLaser* laser;
};

#endif