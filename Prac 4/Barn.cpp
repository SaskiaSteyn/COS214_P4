#include "Barn.h"

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
