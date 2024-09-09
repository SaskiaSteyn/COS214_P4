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
        //Constructor
        FarmUnit() {};
        virtual ~FarmUnit() {}

        //Memory method
        void notifyFarmerSoil(State* oldStateSoil);
        void notifyFarmerCrop(State* oldStateCrop);

        //State method
        virtual void setStateSoil(SoilState* newSoilState) = 0;
        virtual void setStateCrop(CropState* newCropState) = 0;


        //Start/truck class
        friend class Truck;
        virtual void buyTruck(Truck* truck) = 0;
        virtual void sellTruck() = 0;
        virtual void callTruck() = 0;
        virtual void startEngine() = 0;

        //Composite methods
        bool addFarmUnit(FarmUnit* farm) {return false;};
        bool removeFarmUnit(FarmUnit* farm) {return false;};
<<<<<<< Updated upstream
        Farm* getFarmUnit(int index) {return nullptr;};
=======
        FarmUnit* getFarmUnit(int index) {return nullptr;};
        virtual bool getCropStatus() = 0;
        virtual void rain(FarmUnit *context);
>>>>>>> Stashed changes

        //observer methods
        State* getSoilState();
        State* getCropState();


    protected:
        vector<Farm*> farms;
        Farmer* farmer;


};

#endif
