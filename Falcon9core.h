#ifndef FALCON_NINE_CORE_H
#define FALCON_NINE_CORE_H

class Falcon9Core {
    private:
        bool ready;
    public:
        Falcon9Core();
        void startEngine();
        void stopEngine();
        bool isActive();
};

#endif