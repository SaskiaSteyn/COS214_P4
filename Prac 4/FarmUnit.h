#ifndef FARMUNIT_H
#define FARMUNIT_H

#include "Farm.h"
#include "Farmer.h"
#include "State.h"
//#include "Truck.h"

class Truck;
class Farmer;

#include <vector>


class FarmUnit : public Farm {
    private:
    //memento: these states get sent to farmer
        State* soilState;
        State* cropState;

    public:
        //Memory method
        void notifyFarmerSoil(State* oldStateSoil);
        void notifyFarmerCrop(State* oldStateCrop);

        //State method
        void setStateSoil(State* newSoilState);
        void setStateCrop(State* newCropState);

        //Start/truck class
        friend class Truck;
        virtual void buyTruck(Truck* truck) = 0;
        virtual void sellTruck() = 0;
        virtual void callTruck() = 0;
        virtual void startEngine() = 0;

        //Composite methods
        bool addFarmUnit(Farm* farm);
        bool removeFarmUnit(Farm* farm);
        Farm* getFarmUnit(int index);

        //observer methods
        State* getSoilState();
        State* getCropState();


    protected:
        vector<Farm*> farms;
        Farmer* farmer;


};

#endif
