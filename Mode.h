#ifndef MODE_H
#define MODE_H

#include "Rocket.h"
#include "SimBackup.h"

class Mode{
    public:
        Mode();
        virtual ~Mode();
        virtual void run(Rocket*,SimBackup*) = 0;
};

#endif