#include "FloodedSoil.h"


string FloodedSoil::getName() {
    return this->name;
}

void FloodedSoil::harvestCrops(int yield, ConcreteFarm* context) {

    if(!context->getFarmUnit(0)->getCropStatus()){
        return;
    }

    cout << "Your is has been flooded. You could not grow any crops" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;
}

void FloodedSoil::rain(FarmUnit *context) {
    cout << "It has started raining on a flooded crop field" << endl;
}

