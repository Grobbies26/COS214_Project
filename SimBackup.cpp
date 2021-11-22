#include "SimBackup.h"

SimBackup :: SimBackup(Mode* m,Ship* s,bool b){
    strategy= m;
    ship = s;
    tmode = m;
    state = new SimStateInfo();
}

Mode* SimBackup :: getMode(){return strategy;}

Ship* SimBackup :: getShip(){return ship;}
bool SimBackup :: getTMode(){return tmode;}

SimStateInfo* SimBackup :: getState(){return state;}