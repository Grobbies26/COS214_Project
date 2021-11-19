#ifndef STARLINK_H
#define STARLINK_H

#include <iostream>
#include "Rocket.h"
#include "payload.h"

using namespace std;

class Starlink: public Payload
{
private:
    
public:
    Starlink();
    
    void handleRequest(Rocket*);
};




#endif