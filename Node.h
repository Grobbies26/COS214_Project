#ifndef NODE_H
#define NODE_H

#include "Stars.h"
#include <list>
#include "SpaceXObserver.h"

class Node : public Stars
{
    private:
    Node* next;
    string status;
    vector<SpaceXObserver*> SXUserlist;
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
    void statusChanged();

};

#endif