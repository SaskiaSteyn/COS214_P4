#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H


#include "Truck.h"
#include "Barn.h"

class DeliveryTruck : public Truck {
    public:
        DeliveryTruck();
        void startEngine(FarmUnit *barn);
};

#endif
