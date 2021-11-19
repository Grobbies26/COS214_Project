#include "NMode.h"
#include "BMode.h"

NMode::NMode(bool b){
    batch = b;
}

NMode::~NMode(){
    
}

void NMode::run(){
    //Temp stub
    if(batch == true){
        Mode* bat = new BMode();

        bat->run();

        delete bat;
        return;
    }
}