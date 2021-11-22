#ifndef SINGLE_VACUUM_MERLIN_H
#define SINGLE_VACUUM_MERLIN_H

class SingleVacuumMerlin {
    private:
        bool ready;
    public:
        SingleVacuumMerlin();
        void startEngine();
        void stopEngine();
        bool isActive();
};

#endif
