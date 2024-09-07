#ifndef SOILSTATE_H
#define SOILSTATE_H

#include "State.h"
#include "CropField.h"

class CropField;

class SoilState : public State {

    public:
        virtual void notify() = 0;
        virtual string getName() = 0;

        virtual void harvestCrops() = 0;
        virtual void rain(CropField* context) = 0;
};

#endif
