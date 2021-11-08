#ifndef SIMSTATEINFO_H
#define SIMSTATEINFO_H

#include <iostream>

using namespace std;

class SimStateInfo
{

        private:
        bool successChanged;
        bool payloadChanged;
       


    public:
        SimStateInfo();
        SimStateInfo(const SimStateInfo& s);   // copy constructor

        void isSuccessChanged();
        void setPayloadChanged();
  
        void showState();

};
#endif
