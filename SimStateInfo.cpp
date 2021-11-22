#include "SimStateInfo.h"

SimStateInfo :: SimStateInfo():
        modeChanged (false),
        shipChanged (false) ,
        tModeChanged (false)
      
{}

SimStateInfo :: SimStateInfo(const SimStateInfo& s) :
    modeChanged (s.modeChanged),
    shipChanged (s.shipChanged) ,
    tModeChanged (s.tModeChanged)
 
{}

void SimStateInfo :: setModeChanged(){ modeChanged = true;}

void SimStateInfo :: setShipChanged(){ shipChanged = true; }

void SimStateInfo :: setTModeChanged(){ tModeChanged = true; }



void SimStateInfo :: showState()
{
    if (modeChanged || shipChanged || tModeChanged )
    {
        cout << "The following has changed: ";
        if (modeChanged) {cout << "Mode ";};
        if (shipChanged) {cout << "Ship ";};
         if (tModeChanged) {cout << "Test Mode ";};
        cout << endl;
    }
    else { cout << "Nothing has changed" << endl; }
}

