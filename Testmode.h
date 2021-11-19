#ifndef TESTMODE_H
#define TESTMODE_H

#include "Command.h"

class TestMode: public Command {
    public:
        void execute();
};

#endif