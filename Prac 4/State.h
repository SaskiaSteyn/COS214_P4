#ifndef STATE_H
#define STATE_H

#include <iostream>

using namespace std;

class State {
    private:
        int productionMultiplier;
        int stateName;

    public:
        virtual void notify() = 0;
        virtual string getName() = 0;


        virtual void harvestCrops() = 0;
};

#endif
