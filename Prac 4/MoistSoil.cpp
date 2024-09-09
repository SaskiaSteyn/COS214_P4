#include "MoistSoil.h"

string MoistSoil::getName() {
    return this->name;
}

void MoistSoil:: harvestCrops(int yield, ConcreteFarm* context) {
    if(!context->getFarmUnit(0)->getCropStatus()){
        return;
    }

    cout << "Your is moist. Your have harvested twice the normal amount of crops!" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;

}

void MoistSoil::rain(FarmUnit *context) {
    cout << "It has started raining on a moist crop field" << endl;
    context->setSoilState(new FruitfulSoil());

}


