
#include "CropField.h"

CropField::CropField() {
    soilState = new DrySoil;
    cropState = new Seedling;
}


void CropField::summonRain() {
    if (soilState->getName() == "DrySoil") {
        soilState == new MoistSoil;
    }
    else {
        soilState = new FloodedSoil;
    }
}

void CropField::setSoilState(State *soilState) {
    delete this->soilState;
    this->soilState = soilState;

}

void CropField::setCropState(State *cropState) {
    delete this->cropState;
    this->cropState = cropState;

}

bool CropField::getCropStatus() {
    return this->cropState->isReadyForHarvest();
}

