#ifndef SIMBACKUP_H
#define SIMBACKUP_H

#include "SimStateInfo.h"

class SimBackup
{
        private:    
        string success;
        string payload;
     
        SimStateInfo* state;

    public:
        SimBackup();
        string getName();       
        string getDescription();      
        SimStateInfo* getState();

};
#endif