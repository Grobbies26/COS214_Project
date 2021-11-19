#ifndef NMODE_H
#define NMODE_H

#include "Mode.h"

class NMode:public Mode{
    private:
        bool batch;
    public:
        NMode(bool,Rocket*);    
        virtual ~NMode();
        virtual void run(Rocket*);
};

#endif