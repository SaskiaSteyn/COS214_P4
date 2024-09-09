#ifndef FARM_H
#define FARM_H

#include "Truck.h"

#include <iostream>

using namespace std;

class Farm {
    private:
        Truck* truck;
        string name;

    public:
        virtual bool addFarmUnit(Farm* farm) = 0;
        virtual bool removeFarmUnit(Farm* farm) = 0;
        virtual Farm* getFarmUnit(int index) = 0;

        string getName();
        void setName(string farmName);


};

#endif
