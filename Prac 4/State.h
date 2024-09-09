#ifndef STATE_H
#define STATE_H

//#include "CropField.h"

#include <iostream>

class CropField;

using namespace std;

class State {
    private:
        int productionMultiplier;
        int stateName;

    public:
        friend class CropField;

        virtual string getName() = 0;
        // Soil Functions
        virtual void harvestCrops(int yield, CropField* context) = 0;
        virtual void rain(CropField* context) = 0;

        // Crop Functions
        virtual bool isReadyForHarvest() = 0;
        virtual void growCrops(CropField* context) = 0;

        virtual int getProductionMultiplier() = 0;
};

#endif
