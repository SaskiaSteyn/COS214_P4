#ifndef FARMER_H
#define FARMER_H

#include "State.h"
#include "Farm.h"
#include "Truck.h"
#include "Memory.h"

class Farmer {
    private:
        //Mento/memory variables
        State* soilState;
        State* cropState;

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
