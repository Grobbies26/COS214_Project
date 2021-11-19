#include "SimBackup.h"

SimBackup :: SimBackup()
	   
{

}


Mode* SimBackup :: getMode(){return strategy;}

Ship* SimBackup :: getShip(){return ship;}
bool SimBackup :: getTMode(){return tmode;}

 SimStateInfo* SimBackup :: getState(){return state;}