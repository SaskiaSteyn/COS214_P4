#ifndef FARMER_H
#define FARMER_H

#include "State.h"
#include "Farm.h"
#include "Truck.h"
#include "Memory.h"
#include "FarmUnit.h"
#include "ConcreteFarm.h"

//class ConcreteFarm;
//class FarmUnit;

class Farmer {
    private:
        //Mentos/memory variables
        //When the states get updated by farmUnit, the previous/older value gets sent to memory
        SoilState* soilState;
        CropState* cropState;

        //Composite variables
//        Farm* farm;

        //Observer variable
        ConcreteFarm *concreteFarm;
//        FarmUnit* farmUnit;
//        FarmUnit* barn;




    public:
//        friend class ConcreteFarm;
        Farmer(ConcreteFarm *concreteFarm);

        //Mentos/memory methods
        Memory* createMemorySoil();
        Memory* createMemoryCrop();

        //State methods
        void setStateSoil(SoilState* oldSoilState);
        void setStateCrop(CropState* oldCropState);
        void increaseCapacity(int amount);


        //Observer methods
        void updateFarmState();


};

#endif
