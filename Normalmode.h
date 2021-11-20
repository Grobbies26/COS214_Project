#ifndef NORMAL_MODE_H
#define NORMAL_MODE_H

#include "Command.h"
#include "Simulation.h"

class NormalMode: public Command {
    public:
        NormalMode(Simulation*);
        virtual void execute();
};

#endif