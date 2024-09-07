
#include "CropField.h"

void CropField::summonRain() {
    this->soilState->rain(this);
}

void CropField::setSoilState(SoilState *soilState) {
    delete this->soilState;
    this->soilState = soilState;

}

void CropField::setCropState(CropState *cropState) {
    delete this->cropState;
    this->cropState = cropState;

}

bool CropField::getCropStatus() {
    return this->cropState->isReadyForHarvest();
}

