#ifndef TESTMODE_H
#define TESTMODE_H

#include "Command.h"
#include "Simulation.h"

class TestMode: public Command {
    public:
        TestMode(Simulation*);
        void execute();
};

#endif