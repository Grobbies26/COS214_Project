#ifndef MODE_H
#define MODE_H

#include "Rocket.h"

class Mode{
    public:
        Mode(Rocket*);
        virtual ~Mode();
        virtual void run(Rocket*) = 0;
     private:
        Rocket* rocket;
};

#endif