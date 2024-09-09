#include "ConcreteFarm.h"

ConcreteFarm::ConcreteFarm() : Farm() {

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

FarmUnit *ConcreteFarm::getFarmUnit(int index) {
    return this->farms.at(index);
}

void ConcreteFarm::buyTruck(Truck *truck) {
    this->truck = truck;
}

void ConcreteFarm::sellTruck() {
    delete this->truck;
}

void ConcreteFarm::callTruck() {
    if (getTruckName() == "Delivery") {
        this->truck->startEngine(farms[1]);
    }
    else {
        this->truck->startEngine(farms[0]);
    }
}

void ConcreteFarm::startEngine() {
    callTruck();
}

string ConcreteFarm::getTruckName() {
    return truck->getName();
}

void ConcreteFarm::setSoilState(SoilState* soilState) {
    this->farms[0]->setSoilState(soilState);
    this->farmer->updateFarmState();
}

void ConcreteFarm::setCropState(CropState *cropState) {
    this->farms[0]->setCropState(cropState);
    this->farmer->updateFarmState();
}

SoilState *ConcreteFarm::getSoilState() {
    return this->farms[0]->getSoilState();
}

CropState *ConcreteFarm::getCropState() {
    return this->farms[0]->getCropState();
}

void ConcreteFarm::harvest() {
    if (this->farms[0]->getSoilState()->isReadyForHarvest()) {
        int increaseBy = 16 * (this->farms[0]->getSoilState()->getProductionMultiplier());

        this->farms[1]->increaseCapacity(increaseBy);

        this->notifyFarmerHarvest(increaseBy);
    }
}

//void ConcreteFarm::notifyFarmerSoil(State *oldStateSoil) {
//    this->farmer->setStateCrop(oldStateSoil);
//}
//
//void ConcreteFarm::notifyFarmerCrop(State *oldStateCrop) {
//    this->farmer->setStateCrop(oldStateCrop);
//}

void ConcreteFarm::notifyFarmerHarvest(int amount) {
    this->farmer->increaseCapacity(amount);
}
