#ifndef NMODE_H
#define NMODE_H

#include "Mode.h"

class NMode:public Mode{
    public:
        NMode();
        virtual ~NMode();
        virtual void run();
};

#endif