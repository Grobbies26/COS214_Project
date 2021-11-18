#ifndef NMODE_H
#define NMODE_H

#include "Mode.h"

class NMode:public Mode{
    private:
        bool batch;
        bool store;
    public:
        NMode(bool);    
        virtual ~NMode();
        virtual void run();
};

#endif