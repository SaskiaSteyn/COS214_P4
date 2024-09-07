
#include "DrySoil.h"

void DrySoil::notify() {
    
}

string DrySoil::getName() {
    return this->name;
}

void DrySoil::harvestCrops(int yield) {
    cout << "Your soil has been dry. Your crops are not bountiful" << endl;

    cout << "You have harvested " << yield * productionMultiplier << " crops." << endl;

}

void DrySoil::rain(CropField* context) {
    cout << "It has started raining on a dry cropfield" << endl;

    context->setSoilState(new MoistSoil());
}

