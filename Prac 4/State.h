#ifndef STATE_H
#define STATE_H

#include "Farmer.h"
#include "CropField.h"

class State : public CropField {
    private:
        int productionMultiplier;

    public:
        virtual void notify() = 0;
};

#endif
