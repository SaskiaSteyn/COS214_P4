#ifndef FARMUNIT_H
#define FARMUNIT_H

#include "Farm.h"
#include "ConcreteFarm.h"
#include "State.h"
//#include "Truck.h"


class FarmUnit : public Farm {
    private:
        State* soilState;
        State* cropState;

    public:
        //Memory method
        void notifyFarmer();

        //State method
        void setStateSoil();
        void setStateCrop();

        //Start/truck class
        virtual void buyTruck(Truck* truck) = 0;
        virtual void sellTruck() = 0;
        virtual void callTruck() = 0;
        virtual void startEngine() = 0;

        //Composite methods

        void addFarmUnit(Farm* farm);
        void removeFarmUnit(Farm* farm);
        Farm* getFarmUnit(int index);


};

#endif
