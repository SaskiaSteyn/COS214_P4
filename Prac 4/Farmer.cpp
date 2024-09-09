
#include "Farmer.h"

Farmer::Farmer(ConcreteFarm *concreteFarm) {
    this->concreteFarm = concreteFarm;
}

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

void Farmer::setStateSoil(SoilState *oldSoilState) {
    this->soilState = oldSoilState;

}

void Farmer::setStateCrop(CropState *oldCropState) {
    this->cropState = oldCropState;

}

void Farmer::updateFarmState() {
    createMemoryCrop();
    createMemorySoil();

    setStateSoil(this->concreteFarm->getSoilState());
    setStateCrop(this->concreteFarm->getCropState());
//    this->soilState = this->farm->getFarmUnit(0)->getSoilState();
//    this->cropState = this->farm->getFarmUnit(0)->getCropState();

    if (this->cropState->getName() == "FullyGrown") {
        this->concreteFarm->harvest();
    }
}

void Farmer::increaseCapacity(int amount) {
    if (this->concreteFarm->getFarmUnit(1)->getCurrentCapacity() + amount >= this->concreteFarm->getFarmUnit(1)->getThreshhold()) {
        if (this->concreteFarm->getTruckName() != "Delivery") {
            cout << "This farm does not own a delivery truck. Cannot store this harvest" << endl;
            return;
        }

        this->concreteFarm->getFarmUnit(1)->increaseCapacity(amount);
        this->concreteFarm->startEngine();
    }
}
