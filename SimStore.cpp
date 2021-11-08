#include "SimStore.h"

SimStore :: SimStore()
{    memento=0;}
    
SimBackup* SimStore :: getMemento(){ return memento; }

void SimStore :: setMemento(SimBackup* m)
{
    memento = m;
}
