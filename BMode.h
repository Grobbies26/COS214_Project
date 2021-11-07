#ifndef BMODE_H
#define BMODE_H

#include "Mode.h"

class BMode:public Mode{
    public:
        BMode();
        virtual ~BMode();
        virtual void run();
};

#endif