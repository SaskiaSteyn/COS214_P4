#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"

class ConcreteFarm : public Farm {

    ConcreteFarm();
    void addFarmUnit(Farm* farm);
    void removeFarmUnit(Farm* farm);
    Farm* getFarmUnit(int index);
};

#endif
