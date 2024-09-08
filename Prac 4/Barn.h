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
        int getCurrentCapacity();
        void increaseCapacity(int amount);
        void decreaseCapacity(int amount);
};

#endif
