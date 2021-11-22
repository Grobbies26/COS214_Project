#ifndef SIMSTORE_H
#define SIMSTORE_H

#include "SimBackup.h"

class SimStore
{
    public:
        SimStore();
        SimBackup* getMemento();
        void setMemento(SimBackup*);
    private:
        SimBackup* memento;
};
#endif
