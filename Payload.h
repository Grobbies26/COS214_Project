#ifndef PAYLOAD_H
#define PAYLOAD_H

#include "Rocket.h"

class Payload : public Rocket {
    private: 
        Rocket* rocket;
    public:
        Payload(string);
        virtual ~Payload();
        virtual void attach(Rocket*);
        void handleRequest(Rocket*)=0;
        virtual void deliver()=0;
};

#endif
