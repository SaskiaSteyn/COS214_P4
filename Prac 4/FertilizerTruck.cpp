#include "FertilizerTruck.h"

FertilizerTruck::FertilizerTruck() : Truck("Fertilizer"){}

void FertilizerTruck::startEngine(FarmUnit *farm) {
    farm->setSoilState(new FruitfulSoil);
}
