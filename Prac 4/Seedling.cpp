
#include "Seedling.h"

void Seedling::notify() {

}

string Seedling::getName() {
    return this->name;
}

bool Seedling:: isReadyForHarvest() {
    cout << "You cannot harvest your crops yet, they are still seedlings!" << endl;
    return false;

}

void Seedling::growCrops(CropField *context) {
    cout << "Your seedling are slowly growing!" << endl;
    context->setSoilState(new Growing());

}
