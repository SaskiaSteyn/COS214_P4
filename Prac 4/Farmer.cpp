
#include "Farmer.h"

Memory *Farmer::createMemorySoil() {
    Memory* newMemory = new Memory();
    newMemory->saveMemory(this->soilState);

    return newMemory;
}

Memory *Farmer::createMemoryCrop() {
    Memory* newMemory = new Memory();
    newMemory->saveMemory(this->cropState);

    return newMemory;
}

void Farmer::setStateSoil(State *oldSoilState) {
    this->soilState = oldSoilState;

}

void Farmer::setStateCrop(State *oldCropState) {
    this->cropState = oldCropState;

}

void Farmer::updateFarmState(Farm *farm) {

}

