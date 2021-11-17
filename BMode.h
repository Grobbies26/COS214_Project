#ifndef BMODE_H
#define BMODE_H

#include "NMode.h"

class BMode:public NMode{
    public:
        BMode();
        virtual ~BMode();
        virtual void run();
};

#endif