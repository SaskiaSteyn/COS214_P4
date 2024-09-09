#ifndef STATE_H
#define STATE_H

#include <iostream>

using namespace std;

class State {
    private:
        int productionMultiplier;
        int stateName;

    public:
        virtual string getName() = 0;
        virtual bool isReadyForHarvest() = 0;
};

#endif
