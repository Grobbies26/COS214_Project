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
        void attachUser(SpaceXObserver*,int);
        string getState();
        void sendRadioSignal();        
        void setState(string);
        void statusChanged(ABSLaser*);
        void LaserCommunication(string);
    private:
        Stars* next;
        string status;
        SpaceXObserver** SXUserlist;
        ABSLaser* laser;
};

#endif