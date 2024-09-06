#ifndef FARMER_H
#define FARMER_H

#include "State.h"
#include "Farm.h"
#include "Truck.h"
#include "Memory.h"
#include "CropField.h"

class Farmer {
    private:
        //Mento/memory variables
        //When the states get updated by farmunit, the previous/older value gets sent to memory
        CropField* soilState;
        CropField* cropState;

        //Composite variables
        Farm* farm;

        //Strat/truck variable
        Truck* truck;


    public:
        //Mentos/memory methods
        Memory* createMemory();

        //State methods
        void setStates();
        void updateFarmState(Farm* farm);

};

#endif
