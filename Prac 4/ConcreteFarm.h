#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include <vector>

class ConcreteFarm : public Farm {
    public:
        ConcreteFarm();
        bool addFarmUnit(FarmUnit* farm);
        bool removeFarmUnit(FarmUnit* farm);
        FarmUnit* getFarmUnit(int index);

    protected:
        vector<FarmUnit*> farms;
};

#endif
