#include "ABSSim.h"

ABSSim::ABSSim(){
    
}

ABSSim::~ABSSim(){
    if (state != nullptr){
        delete state;
    }
    if (strategy != nullptr){
        delete strategy;
    }
    if (ship != nullptr){
        delete ship;
    }
    for(int i = 0; i < 4; i++){
        delete list[i];
    }
    delete [] list;
}