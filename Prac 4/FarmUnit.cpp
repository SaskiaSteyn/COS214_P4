#include "FarmUnit.h"



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
    return Farm::getFarmUnit(index); //TODO: implement this function
}

