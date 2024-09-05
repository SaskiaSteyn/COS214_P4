#include "Iterator.h"

Iterator::Iterator(map<string, Farm *> farms) {
    this->farms = farms;
    this->current = this->farms.begin()->second;
}

Farm *Iterator::getFarm(string farmName) {
    Farm * possibleFarm = farms.find(farmName)->second;

    if (possibleFarm != nullptr) {
        current = possibleFarm;
        return current;
    }
    else {
        current = nullptr;
        return current;
    }
}

Farm *Iterator::getStart() {
    this->current = this->farms.begin()->second;
    return current;
}

Farm *Iterator::getEnd() {
    this->current = this->farms.end()->second;
    return current;
}

Farm *Iterator::getNext() {
    if (current == farms.end()->second) {
        return nullptr;
    }

    current = next(current);

    return current;
}

Farm *Iterator::getPrevious() {
    if (current == farms.begin()->second) {
        return nullptr;
    }

    current = prev(current);

    return current;
}
