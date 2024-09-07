#ifndef FARMER_H
#define FARMER_H

#include "State.h"
#include "Farm.h"
#include "Truck.h"
#include "Memory.h"
#include "FarmUnit.h"

class FarmUnit;

class Farmer {
    private:
        //Mentos/memory variables
        //When the states get updated by farmUnit, the previous/older value gets sent to memory
        State* soilState;
        State* cropState;

        //Composite variables
        Farm* farm;

        //Observer variable
        FarmUnit* farmUnit;

        //Strat/truck variable
        Truck* truck;


    public:
        //Mentos/memory methods
        Memory* createMemorySoil();
        Memory* createMemoryCrop();

        //State methods
        void setStateSoil(State* oldSoilState);
        void setStateCrop(State* oldCropState);


        //Observer methods
        void updateFarmState();


};

#endif
