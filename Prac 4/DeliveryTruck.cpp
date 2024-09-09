#include "DeliveryTruck.h"

DeliveryTruck::DeliveryTruck() : Truck("Delivery"){}

void DeliveryTruck::startEngine(FarmUnit *barn) {
    barn->decreaseCapacity(barn->getCurrentCapacity());
}
