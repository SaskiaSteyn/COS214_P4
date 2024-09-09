
#include "CropField.h"

void CropField::summonRain() {
    this->soilState->rain(this);
}

// void CropField::setSoilState(SoilState *soilState) {
//     delete this->soilState;
//     this->soilState = soilState;
//
// }
//
// void CropField::setCropState(CropState *cropState) {
//     delete this->cropState;
//     this->cropState = cropState;
//
// }

void CropField::setStateSoil(SoilState* newSoilState) {
    notifyFarmerSoil(soilState);
    this->soilState = newSoilState;

    this->farmer->updateFarmState();

}

void CropField::setStateCrop(CropState* newCropState) {
    notifyFarmerCrop(cropState);
    this->cropState = newCropState;

    this->farmer->updateFarmState();

}

bool CropField::getCropStatus() {
    return this->cropState->isReadyForHarvest();
}

