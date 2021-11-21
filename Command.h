#ifndef COMMAND_H
#define COMMAND_H

class ABSSim;

#include <iostream>

class Command{
    public:
        Command(ABSSim*);
        virtual void execute()=0;
    protected:
        ABSSim* sim;
};

#endif
