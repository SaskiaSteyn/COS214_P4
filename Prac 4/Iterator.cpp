#include "Iterator.h"

Iterator::Iterator(map<string, ConcreteFarm *> farms) {
    this->farms = farms;
    this->current = this->farms.begin();
}

ConcreteFarm *Iterator::getFarm(string farmName) {
//    Farm * possibleFarm = farms.find(farmName)->second;
//
//    if (possibleFarm != nullptr) {
//        current = possibleFarm;
//        return current;
//    }
//    else {
//        current = nullptr;
//        return current;
//    }

    map<string, ConcreteFarm*> ::iterator temp;

    for (temp == farms.begin(); temp != farms.end(); ++temp) {
        if (temp->first == farmName) {
            return temp->second;
        }
    }

    return nullptr;
}

ConcreteFarm *Iterator::getStart() {
    this->current = this->farms.begin();
    return current->second;
}

<<<<<<< Updated upstream
Farm * Iterator::getCurrent() {
    return current;
}
=======
ConcreteFarm *Iterator::getEnd() {
    this->current = this->farms.begin();
    return current->second;
}

ConcreteFarm *Iterator::getNext() {
//    if (current == farms.end()->second) {
//        return nullptr;
//    }
//
//    current = next(current);

    current++;

//    if (current->second == nullptr) {
//        return nullptr;
//    }

    return current->second;
}

ConcreteFarm *Iterator::getPrevious() {
//    if (current == farms.begin()->second) {
//        return nullptr;
//    }
//
//    current = prev(current);

    current--;
    return current->second;
}

ConcreteFarm * Iterator::getCurrent() {
    return current->second;
}
>>>>>>> Stashed changes
