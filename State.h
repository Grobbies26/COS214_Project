#ifndef STATE_H
#define STATE_H

#include <iostream>

using namespace std;

class State
{
protected:
    string state;

public:
    ~State();
    virtual void handle() = 0;
    virtual State* update() = 0;
    void setState(string);
    string getState();
};
#endif