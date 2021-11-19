#ifndef SXU_H
#define SXU_H

#include <iostream>
#include "SpaceXObserver.h"
#include "Starlink.h"

using namespace std;

class SpaceXUser : public SpaceXObserver
{
private:
    string name;
    Starlink* starlink;
public:
    SpaceXUser(string, Starlink*);
    void update();
};



#endif