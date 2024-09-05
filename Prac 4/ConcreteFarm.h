#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include <vector>

class ConcreteFarm : public Farm {

    ConcreteFarm();
    bool addFarmUnit(Farm* farm);
    bool removeFarmUnit(Farm* farm);
    Farm* getFarmUnit(int index);

    protected:
        vector<Farm*> farms;
};

#endif
