#ifndef SXU_H
#define SXU_H

#include <iostream>
#include "SpaceXObserver.h"
#include "Stars.h"

using namespace std;

class SpaceXUser : public SpaceXObserver
{
private:
    string name;
    Stars* star;
public:
    SpaceXUser(string, Stars*);
    void update();
};



#endif