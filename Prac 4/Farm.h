#ifndef FARM_H
#define FARM_H

#include "Truck.h"

#include <iostream>

using namespace std;

class Farm {
    private:
        Truck* truck;

    public:
        virtual void addFarmUnit(Farm* farm) = 0;
        virtual void removeFarmUnit(Farm* farm) = 0;
        virtual Farm* getFarmUnit(int index) = 0;


};

#endif
