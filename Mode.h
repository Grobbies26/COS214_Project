#ifndef MODE_H
#define MODE_H

class Mode{
    public:
        Mode();
        virtual ~Mode();
        virtual void run() = 0;
};

#endif