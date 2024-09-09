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
        void summonRain();

        void setSoilState(SoilState* soilState);
        void setCropState(CropState* cropState);
        SoilState* getSoilState();
        CropState* getCropState();

        bool getCropStatus();


        void buyTruck(Truck* truck) {};
        void sellTruck() {};
        void callTruck() {};
        void startEngine() {};

        int getCurrentCapacity() {return -1;};
        void increaseCapacity(int amount) {};
        void decreaseCapacity(int amount) {};
        void setCapacity(int amount) {};
        int getThreshhold() {return -1;};
};

#endif
