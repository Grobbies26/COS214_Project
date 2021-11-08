#include "SimStateInfo.h"

SimStateInfo :: SimStateInfo():
        successChanged (false),
        payloadChanged (false)
      
{}

SimStateInfo :: SimStateInfo(const SimStateInfo& s) :
    successChanged (s.successChanged),
    payloadChanged (s.payloadChanged)
 
{}

void SimStateInfo :: isSuccessChanged(){ successChanged = true;}

void SimStateInfo :: setPayloadChanged(){ payloadChanged = true; }

void SimStateInfo :: showState()
{
    if (successChanged || payloadChanged)
    {
        cout << "The following has changed: ";
        if (successChanged) {cout << "success ";};
        if (payloadChanged) {cout << "payload ";};
        cout << endl;
    }
    else { cout << "Nothing has changed" << endl; }
}

