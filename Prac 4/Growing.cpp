#include "Growing.h"

string Growing::getName() {
    return this->name;
}

bool Growing:: isReadyForHarvest() {
    cout << "You cannot harvest your crops yet, they are still growing!" << endl;
    return false;

}

void Growing::growCrops(CropField *context) {
    cout << "Your growing crops are almost ready!" << endl;
    context->setCropState(new FullyGrown());
}
