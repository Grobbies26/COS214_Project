#ifndef BMODE_H
#define BMODE_H

#include "NMode.h"

class BMode:public Mode{
    public:
        BMode();
        virtual ~BMode();
        virtual void run();
};

#endif