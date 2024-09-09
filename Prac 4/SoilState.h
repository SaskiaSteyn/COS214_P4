#ifndef SOILSTATE_H
#define SOILSTATE_H

#include "State.h"
#include "CropField.h"

class CropField;

class SoilState : public State {

    public:
        virtual string getName() = 0;

<<<<<<< Updated upstream
        virtual void harvestCrops(int yield, CropField* context) = 0;
        virtual void rain(CropField* context) = 0;
=======
        virtual void harvestCrops(int yield, ConcreteFarm* context) = 0;
        virtual void rain(FarmUnit* context) = 0;

        bool isReadyForHarvest() {return false;};
        void growCrops(FarmUnit* context) {};

        virtual int getProductionMultiplier() = 0;
>>>>>>> Stashed changes
};

#endif
