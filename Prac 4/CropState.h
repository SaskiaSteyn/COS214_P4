#ifndef CROPSTATE_H
#define CROPSTATE_H

#include "State.h"

class CropState : public State {
    public:
        virtual void notify() = 0;
        virtual string getName() = 0;

        virtual bool isReadyForHarvest() = 0;
        virtual void growCrops(CropField* context) = 0;
};

#endif
