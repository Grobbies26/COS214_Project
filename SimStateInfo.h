#ifndef SIMSTATEINFO_H
#define SIMSTATEINFO_H

#include <iostream>

using namespace std;

class SimStateInfo
{
    public:
        SimStateInfo();
        SimStateInfo(const SimStateInfo& s);   // copy constructor

        void setModeChanged();
        void setShipChanged();
        void setTModeChanged();
  
        void showState();
    private:
        bool modeChanged;
        bool shipChanged;
        bool tModeChanged;
};
#endif
