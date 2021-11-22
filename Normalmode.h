#ifndef NORMAL_MODE_H
#define NORMAL_MODE_H

#include "Command.h"
#include "ABSSim.h"

class NormalMode: public Command {
    public:
        NormalMode(ABSSim*);
        virtual void execute();
};

#endif