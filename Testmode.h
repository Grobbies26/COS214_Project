#ifndef TESTMODE_H
#define TESTMODE_H

#include "Command.h"
#include "ABSSim.h"

class TestMode: public Command {
    public:
        TestMode(ABSSim*);
        void execute();
};

#endif