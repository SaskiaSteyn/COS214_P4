#include "FloodedSoil.h"


string FloodedSoil::getName() {
    return this->name;
}

void FloodedSoil::harvestCrops(int yield, CropField* context) {

    if(!context->getCropStatus()){
    return;
    }

    cout << "Your is has been flooded. You could not grow any crops" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;
}

void FloodedSoil::rain(CropField *context) {
    cout << "It has started raining on a flooded crop field" << endl;
}

int FloodedSoil::getProductionMultiplier() {
    return this->productionMultiplier;
}
