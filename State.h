#ifndef STATE_H
#define STATE_H

#include <iostream>

using namespace std;

class State
{
protected:
    string state;
    bool core;
    bool engine;
    bool single;
public:
    State();
    State(bool, bool, bool);
    ~State();
    virtual void handle() = 0;
    virtual State* update() = 0;
    void setState(string);
    string getState();
    bool getSingle();
    bool getCore();
    bool getEngine();

};
#endif