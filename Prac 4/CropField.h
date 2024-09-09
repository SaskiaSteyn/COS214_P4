#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "SoilState.h"
#include "CropState.h"

class SoilState;
class CropState;

class CropField : public FarmUnit{
    private:
        SoilState* soilState;
        CropState* cropState;
        int yield; //the amount that has been planted


    public:
        // virtual void harvestCrops() = 0;
        CropField(): FarmUnit() {

        };
        void summonRain();

        void setStateSoil(SoilState* newSoilState);
        void setStateCrop(CropState* newCropState);

        bool getCropStatus();

        void buyTruck(Truck* truck) {};
        void sellTruck() {};
        void callTruck() {};
        void startEngine() {};
        bool addFarmUnit(FarmUnit* farm) {};
        bool removeFarmUnit(FarmUnit* farm) {};
};

#endif
