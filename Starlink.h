#ifndef STARLINK_H
#define STARLINK_H

#include <iostream>
#include <vector>

using namespace std;

class Laser;

class SpaceXUser;

class Starlink
{
private:
    Laser laser;
    string status;
    vector<SpaceXUser*> SXUserlist;
public:
    void attachUser(SpaceXUser*);
    void detachUser(SpaceXUser*);
    string getState();
    void sendRadioSignal();
    void setState(string);
    void statusChanged();
};




#endif