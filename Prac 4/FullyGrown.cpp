#include "FullyGrown.h"

string FullyGrown::getName() {
    return this->name;
}

bool FullyGrown:: isReadyForHarvest() {
    cout << "You may harvest the crops, they are fully grown" << endl;
    return true;

}

void FullyGrown::growCrops(CropField *context) {
    cout << "Your fully grown crops are ready for harvest!" << endl;
}

