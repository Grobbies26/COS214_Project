#ifndef MODE_H
#define MODE_H

#include "Rocket.h"

class Mode{
    public:
        Mode();
        virtual ~Mode();
        virtual void run(Rocket*) = 0;
};

#endif