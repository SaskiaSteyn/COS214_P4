#ifndef CROPSTATE_H
#define CROPSTATE_H

#include "State.h"
#include "CropField.h"

class CropField;

class CropState : public State {
    public:
        virtual string getName() = 0;

        virtual bool isReadyForHarvest() = 0;
        virtual void growCrops(CropField* context) = 0;
};

#endif
