#include "DeliveryTruck.h"

void DeliveryTruck::shipOffCrops(Barn *barn) {
    barn->decreaseCapacity(barn->getCurrentCapacity());
}
