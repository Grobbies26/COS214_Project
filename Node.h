#ifndef NODE_H
#define NODE_H

#include "Stars.h"
#include <vector>
#include "SpaceXObserver.h"
#include "Laser.h"

class Node : public Stars
{
    private:

    Node* next;
    string status;
    vector<SpaceXObserver*> SXUserlist;
    Laser* laser;

    public:

    Node();
    ~Node();

    void setNext(Stars*);
    Stars* getNext();

    void attachUser(SpaceXObserver*);
    void detachUser(SpaceXObserver*);
    string getState();
    void sendRadioSignal();
    
    void setState(string);
    void statusChanged(Laser*);
    void LaserCommunication(string);

};

#endif