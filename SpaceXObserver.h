#ifndef SXO_H
#define SXO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SpaceXObserver
{

public:
    SpaceXObserver(){}
    virtual ~SpaceXObserver(){}
    virtual void update() = 0;
 
};

#endif