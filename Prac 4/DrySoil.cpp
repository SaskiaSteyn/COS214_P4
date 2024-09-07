
#include "DrySoil.h"

void DrySoil::notify() {

}

string DrySoil::getName() {
    return this->name;
}

void DrySoil:: harvestCrops(int yield, CropField* context){

    if(!context->getCropStatus()){
        return;
    }

    cout << "Your soil has been dry. Your crops are not bountiful" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;

}

void DrySoil::rain(CropField* context) {
    cout << "It has started raining on a dry crop field" << endl;
    context->setSoilState(new MoistSoil());
}

