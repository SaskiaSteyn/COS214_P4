#ifndef FARM_H
#define FARM_H

#include "FarmUnit.h"

class Farm {
    private:
        Truck* truck;

    public:
        void addFarmUnit(FarmUnit farm);
        void removeFarmUnit(FarmUnit farm);
        FarmUnit* getFarmUnit(int index);


};

#endif
