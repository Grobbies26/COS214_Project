#ifndef LAUNCH_H
#define LAUNCH_H

#include "Command.h"
#include "ABSSim.h"

class Launch: public Command {
    public:
        Launch(ABSSim*);
        void execute();
};

#endif