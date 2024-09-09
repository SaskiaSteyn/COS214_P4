#ifndef SOILSTATE_H
#define SOILSTATE_H

#include "State.h"
//#include "CropField.h"

class CropField;

class SoilState : public State {

    public:
        virtual string getName() = 0;

        virtual void harvestCrops(int yield, CropField* context) = 0;
        virtual void rain(CropField* context) = 0;

        bool isReadyForHarvest() {return false;};
        void growCrops(CropField* context) {};

        virtual int getProductionMultiplier() = 0;
};

#endif
