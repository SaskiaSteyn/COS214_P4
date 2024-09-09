#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H


#include "Truck.h"
#include "FruitfulSoil.h"
#include "FarmUnit.h"
//#include "State.h"

class FertilizerTruck : public Truck {
    FertilizerTruck();
    void startEngine(FarmUnit *farm);
};

#endif
