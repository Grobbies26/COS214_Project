#ifndef TMODE_H
#define TMODE_H

#include "Mode.h"

class TMode:public Mode{
    public:
        TMode(Rocket*);
        virtual ~TMode();
        virtual void run(Rocket*);
};

#endif