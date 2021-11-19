#ifndef SIMBACKUP_H
#define SIMBACKUP_H

#include "SimStateInfo.h"
#include "Mode.h"
#include "Ship.h"

class SimBackup
{    
    public:
        SimBackup(Mode*,Ship*,bool);
        Mode* getMode();       
        Ship* getShip();   
        bool getTMode();   
        SimStateInfo* getState();

    private:    
        Mode* strategy;
        Ship* ship;
        bool tmode;
    
        SimStateInfo* state;

};
#endif