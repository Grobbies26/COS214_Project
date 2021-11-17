#ifndef STARLINK_H
#define STARLINK_H

#include <iostream>
#include <vector>
#include "Rocket.h"

using namespace std;

class Laser;

class SpaceXUser;

class Starlink: public Payload
{
private:
    Laser laser;
    string status;
    vector<SpaceXUser*> SXUserlist;
public:
    Starlink();
    void attachUser(SpaceXUser*);
    void detachUser(SpaceXUser*);
    string getState();
    void sendRadioSignal();
    void setState(string);
    void statusChanged();
    void handleRequest(Rocket*);
};




#endif