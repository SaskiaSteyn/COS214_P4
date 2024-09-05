#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

using namespace std;

#include "FarmUnit.h"
#include "Farm.h"

class Truck {
    public:
        void truckOperation(Farm *unit);
};

#endif
