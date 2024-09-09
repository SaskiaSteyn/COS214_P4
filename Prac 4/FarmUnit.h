#ifndef FARMUNIT_H
#define FARMUNIT_H

#include "Farm.h"
#include "State.h"
#include "SoilState.h"
#include "CropState.h"
//#include "Truck.h"

class Truck;
class Farmer;

#include <vector>


class FarmUnit : public Farm {
    private:
    //memento: these states get sent to farmer
        SoilState* soilState;
        CropState* cropState;

    public:
        FarmUnit();

        //State method
        virtual void setSoilState(SoilState* newSoilState) = 0;
        virtual void setCropState(CropState* newCropState) = 0;

        //Composite methods
        bool addFarmUnit(FarmUnit* farm) {return false;};
        bool removeFarmUnit(FarmUnit* farm) {return false;};
        FarmUnit* getFarmUnit(int index) {return nullptr;};

        //observer methods
        virtual SoilState* getSoilState() = 0;
        virtual CropState* getCropState() = 0;

        virtual int getCurrentCapacity() = 0;
        virtual void increaseCapacity(int amount) = 0;
        virtual void decreaseCapacity(int amount) = 0;
        virtual void setCapacity(int amount) = 0;
        virtual int getThreshhold() = 0;
};

#endif
