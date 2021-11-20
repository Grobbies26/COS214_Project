#include <iostream>
#include "Laser.h"
#include "Stars.h"

using namespace std;

Laser::Laser(Links* nl){
    nodeList = nl;
}

void Laser::notify(string nodeStatus){
    cout<<"Laser Communication Activated. Notifying nodes that a node has changed status."<<endl;
    
    SatelliteIterator* it = nodeList->createIterator(nodeList->getHead());
    Stars* curr = it->firstSatellite();

    while (it->hasNext())
    {
        curr->LaserCommunication(nodeStatus);
        curr = it->nextSatellite();
    }
    curr->LaserCommunication(nodeStatus);

}