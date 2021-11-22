#ifndef SXU_H
#define SXU_H

#include <iostream>
#include "SpaceXObserver.h"
#include "Stars.h"

using namespace std;

class SpaceXUser : public SpaceXObserver
{
    public:
        SpaceXUser(string, Stars*);
        void update();
    private:
        string name;
        Stars* star;
};



#endif