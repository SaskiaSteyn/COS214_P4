#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include "Farmer.h"
#include "SoilState.h"
#include "CropField.h"
#include "Truck.h"
#include <vector>

class Farmer;

class ConcreteFarm : public Farm {
    private:
        //Strat/truck variable
        Truck* truck;
    public:
        friend class Farmer;
        ConcreteFarm();
        bool addFarmUnit(FarmUnit* farm);
        bool removeFarmUnit(FarmUnit* farm);
        FarmUnit* getFarmUnit(int index);



        //Start/truck class
//        friend class Truck;
        void buyTruck(Truck* truck);
        void sellTruck();
        void callTruck();
        void startEngine();
        string getTruckName();


        //Memory method
//        void notifyFarmerSoil(State* oldStateSoil);
//        void notifyFarmerCrop(State* oldStateCrop);
        void notifyFarmerHarvest(int amount);
    // FarmUnit State/Memory/Observer calls
        void setSoilState(SoilState* soilState);
        void setCropState(CropState* cropState);
        SoilState* getSoilState();
        CropState* getCropState();
        void harvest();

    protected:
        vector<FarmUnit*> farms;
        Farmer* farmer;
};

#endif
