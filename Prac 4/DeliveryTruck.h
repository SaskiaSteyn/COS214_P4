#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H


#include "Truck.h"
#include "Barn.h"

class DeliveryTruck : public Truck {
    public:
        void shipOffCrops(Barn *barn);
};

#endif
