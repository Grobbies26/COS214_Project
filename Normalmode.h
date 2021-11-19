#ifndef NORMAL_MODE_H
#define NORMAL_MODE_H

#include "Command.h"

class NormalMode: public Command {
    public:
        virtual void execute();
};

#endif