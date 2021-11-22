#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"

class Button {
    private:
        Command* role;
    public:
        Button( Command* );
        ~Button();
        void press();
};

#endif