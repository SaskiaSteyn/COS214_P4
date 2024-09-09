#include "Barn.h"

Barn::Barn() {
    this->totalCapacity = 100;
    this->currentCapacity = 0;
    this->threshold = 50;
}

int Barn::getCurrentCapacity() {
    return this->currentCapacity;
}

void Barn::increaseCapacity(int amount) {
    if (this->currentCapacity + amount <= this->threshold) {
        this->currentCapacity += amount;
    }
}

void Barn::decreaseCapacity(int amount) {
    if (this->currentCapacity - amount >= 0) {
        this->currentCapacity -= amount;
    }

}
