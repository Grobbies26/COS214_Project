#ifndef LAUNCH_H
#define LAUNCH_H

#include "Command.h"
#include "Simulation.h"

class Launch: public Command {
    public:
        Launch(Simulation*);
        void execute();
};

#endif