#ifndef STATE_H
#define STATE_H

#include "Farmer.h"

class State : CropField {
    private:
        int productionMultiplier;

    public:
        virtual void notify() = 0;
};

#endif
