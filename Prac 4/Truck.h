#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

using namespace std;

#include "FarmUnit.h"
#include "Farm.h"

class Farm;

class Truck {
    public:
//        friend class Farm;
        void truckOperation(Farm *farm);
};

#endif
