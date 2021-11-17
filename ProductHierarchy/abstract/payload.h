#ifndef PAYLOAD_H
#define PAYLOAD_H

#include "Rocket.h"

class Payload : public Rocket {
    private: 
        Rocket* rocket;
    public:
        Payload(string);
        virtual ~Payload();
};

#endif
