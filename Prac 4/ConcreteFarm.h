#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include <vector>

class ConcreteFarm : public Farm {
    public:
        ConcreteFarm();
        bool addFarmUnit(FarmUnit* farm);
        bool removeFarmUnit(FarmUnit* farm);
        Farm* getFarmUnit(int index);

<<<<<<< Updated upstream
        State* getSoilState() {return nullptr;};
        State* getCropState() {return nullptr;};
        void setSoilState(SoilState* soilState) {};
        void setCropState(CropState* cropState) {};
=======


        //Start/truck class
//        friend class Truck;
        void buyTruck(Truck* truck);
        void sellTruck();
        void callTruck();
        void startEngine();
        string getTruckName();
        Truck* getTruck();


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
>>>>>>> Stashed changes

    protected:
        vector<FarmUnit*> farms;
};

#endif
