#include "FruitfulSoil.h"

string FruitfulSoil::getName() {
    return this->name;
}

void FruitfulSoil:: harvestCrops(int yield, ConcreteFarm* context) {

    if(!context->getFarmUnit(0)->getCropStatus()){
        return;
    }

    cout << "Your soil is fruitful. Your have harvested 3x the normal amount of crops!" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;

}

void FruitfulSoil::rain(FarmUnit *context) {
    cout << "It has started raining on a fruitful crop field" << endl;
    context->setSoilState(new FloodedSoil());

}
