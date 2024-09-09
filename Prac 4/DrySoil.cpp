#include "DrySoil.h"


string DrySoil::getName() {
    return this->name;
}

void DrySoil:: harvestCrops(int yield, ConcreteFarm* context){

    if(!context->getFarmUnit(0)->getCropStatus()){
        return;
    }

    cout << "Your soil has been dry. Your crops are not bountiful" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;

}

void DrySoil::rain(FarmUnit* context) {
    cout << "It has started raining on a dry crop field" << endl;
    context->setSoilState(new MoistSoil());
}

