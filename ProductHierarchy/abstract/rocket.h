#ifndef ROCKET_H
#define ROCKET_H

#include "../concrete/singlevacuummerlin.h"

//Forward declaration, will change once this class has been added.
class State;

class Rocket {
    private:
        SingleVacuumMerlin* single;
        State* state;
    public:
        Rocket();
        ~Rocket();
        void change();
        State* getState();
        void setState( State* state );
};

#endif