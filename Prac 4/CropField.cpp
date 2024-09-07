
#include "CropField.h"

void CropField::summonRain() {
    this->soilState->rain(this);
}

void CropField::setSoilState(SoilState *soilState) {
    this->soilState = soilState;

}

void CropField::setCropState(CropState *cropState) {
    this->cropState = cropState;

}

