#ifndef BUTTON_CPP
#define BUTTON_CPP

#include "Button.h"

Button::Button( Command* pCommand ){
    this->role = pCommand;
}

Button::~Button(){
    delete role;
}

void Button::press(){
    this->role->execute();
}

#endif