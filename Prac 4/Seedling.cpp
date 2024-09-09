#include "Seedling.h"

string Seedling::getName() {
    return this->name;
}

bool Seedling:: isReadyForHarvest() {
    cout << "You cannot harvest your crops yet, they are still seedlings!" << endl;
    return false;

}

void Seedling::growCrops(FarmUnit *context) {
    cout << "Your seedling are slowly growing!" << endl;
    context->setCropState(new Growing());

}
