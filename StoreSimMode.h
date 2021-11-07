#ifndef STORESIMMODE_H
#define STORESIMMODE_H

#include "Mode.h"

class StoreSimMode:public Mode{
    public:
        StoreSimMode();
        virtual ~StoreSimMode();
        virtual void run();
};

#endif