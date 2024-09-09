#include "ConcreteFarm.h"

ConcreteFarm::ConcreteFarm() {

}

bool ConcreteFarm::addFarmUnit(FarmUnit* farm) {
    this->farms.push_back(farm);
    return true;
}

bool ConcreteFarm::removeFarmUnit(FarmUnit* farm) {
    for (int i = 0; i < this->farms.size(); i++) {

        if (this->farms[i] == farm) {

            this->farms.erase(this->farms.begin() + i);
            return true;

        }

    }

    return false;
}

Farm *ConcreteFarm::getFarmUnit(int index) {
    return this->farms.at(index);
}


