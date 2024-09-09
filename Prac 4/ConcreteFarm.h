#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include <vector>

class ConcreteFarm : public Farm {
    public:
        ConcreteFarm();
        bool addFarmUnit(Farm* farm);
        bool removeFarmUnit(Farm* farm);
        Farm* getFarmUnit(int index);
        State* getSoilState() {return nullptr;};
        State* getCropState() {return nullptr;};

    protected:
        vector<Farm*> farms;
};

#endif
