#ifndef STORESIMMODE_H
#define STORESIMMODE_H

#include "NMode.h"

class StoreSimMode:public NMode{
    public:
        StoreSimMode();
        virtual ~StoreSimMode();
        virtual void run();
};

#endif