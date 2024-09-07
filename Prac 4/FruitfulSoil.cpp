#include "FruitfulSoil.h"

string FruitfulSoil::getName() {
    return this->name;
}

void FruitfulSoil:: harvestCrops(int yield, CropField* context) {

    if(!context->getCropStatus()){
        return;
    }

    cout << "Your soil is fruitful. Your have harvested 3x the normal amount of crops!" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;

}

void FruitfulSoil::rain(CropField *context) {
    cout << "It has started raining on a fruitful crop field" << endl;
    context->setSoilState(new FloodedSoil());

}
