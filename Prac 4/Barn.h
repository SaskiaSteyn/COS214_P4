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
        friend class DeliveryTruck;
        Barn();
        int getCurrentCapacity();
        void increaseCapacity(int amount);
        void decreaseCapacity(int amount);
        void setCapacity(int amount);
        int getThreshhold();

    void setSoilState(State* soilState) {};
    void setCropState(State* cropState) {};
    SoilState* getSoilState() {return nullptr;};
    CropState* getCropState() {return nullptr;};
};

#endif
