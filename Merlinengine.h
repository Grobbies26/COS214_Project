#ifndef MERLIN_ENGINE_H
#define MERLIN_ENGINE_H

class MerlinEngine {
    private:
        bool ready;
    public:
        MerlinEngine();
        void startEngine();
        void stopEngine();
        bool isActive();
};

#endif