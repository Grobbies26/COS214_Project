#ifndef SIMBACKUP_H
#define SIMBACKUP_H

#include "SimStateInfo.h"

class SimBackup
{

    
    public:
        SimBackup();
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