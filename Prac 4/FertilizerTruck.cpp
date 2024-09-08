#include "FertilizerTruck.h"

void FertilizerTruck::startEngine(FarmUnit *farm) {
    farm->setStateSoil(new FruitfulSoil);
}
