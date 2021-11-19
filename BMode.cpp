#include "BMode.h"

#include <iostream>

BMode::BMode(){

}

BMode::~BMode(){
    
}

void BMode::run(){
    bool valid = false;
    int m = 1;
    while (valid == false){
        cout << "How many times would you like to run the simulation: ";
        cin >> m;
        if(m > 1){
            valid == true;
        }
    }

    for(int i = 0; i < m; i++){
        //rocket relevant work done here
    }
}