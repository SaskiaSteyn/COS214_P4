#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include "Farmer.h"
#include <vector>

class ConcreteFarm : public Farm {
    public:
        ConcreteFarm();
        bool addFarmUnit(FarmUnit* farm);
        bool removeFarmUnit(FarmUnit* farm);
        FarmUnit* getFarmUnit(int index);

        //Start/truck class
        friend class Truck;
        void buyTruck(Truck* truck);
        void sellTruck();
        void callTruck();
        void startEngine();

    protected:
        vector<FarmUnit*> farms;
        Farmer* farmer;
};

#endif
