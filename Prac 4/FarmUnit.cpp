#include "FarmUnit.h"

//Memento functions
void FarmUnit::notifyFarmerSoil(State* oldStateSoil) {
    farmer->setStateSoil(oldStateSoil);

}

void FarmUnit::notifyFarmerCrop(State* oldStateCrop) {
    farmer->setStateCrop(oldStateCrop);

}


//Memento setting state methods
void FarmUnit::setStateSoil(State* newSoilState) {
    notifyFarmerSoil(soilState);
    this->soilState = newSoilState;

}

void FarmUnit::setStateCrop(State* newCropState) {
    notifyFarmerCrop(cropState);
    this->cropState = newCropState;


}


//Composite methods
bool FarmUnit::addFarmUnit(Farm *farm) {
    this->farms.push_back(farm);
    return true;
}

bool FarmUnit::removeFarmUnit(Farm *farm) {
    for (int i = 0; i < this->farms.size(); i++) {

        if (this->farms[i] == farm) {

            this->farms.erase(this->farms.begin() + i);
            return true;

        }

    }

    return false;
}

Farm *FarmUnit::getFarmUnit(int index) {
    return this->farms.at(index);
}

