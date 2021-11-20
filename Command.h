#ifndef COMMAND_H
#define COMMAND_H

#include "Simulation.h"

#include <iostream>

class Command{
    public:
        Command(Simulation*);
        virtual void execute()=0;
    protected:
        Simulation* sim;
};

#endif
