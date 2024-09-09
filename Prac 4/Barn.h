#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"
class DeliveryTruck;

class Barn : public FarmUnit {
    private:
        int totalCapacity;
        int currentCapacity;
        int threshold;
    public:
        Barn() {};

        friend class DeliveryTruck;
        int getCurrentCapacity();
        void increaseCapacity(int amount);
        void decreaseCapacity(int amount);

<<<<<<< Updated upstream
        void buyTruck(Truck* truck) {};
        void sellTruck() {};
        void callTruck() {};
        void startEngine() {};
        void setSoilState(SoilState* soilState) {};
        void setCropState(CropState* cropState) {};
        bool addFarmUnit(FarmUnit* farm) {};
        bool removeFarmUnit(FarmUnit* farm) {};
        void setStateSoil(SoilState* newSoilState) {};
        void setStateCrop(CropState* newCropState) {};
        State* getSoilState() {};
        State* getCropState() {};
=======
    void setSoilState(State* soilState) {};
    void setCropState(State* cropState) {};
    SoilState* getSoilState() {return nullptr;};
    CropState* getCropState() {return nullptr;};
    bool getCropStatus() {return false;}
>>>>>>> Stashed changes
};

#endif
