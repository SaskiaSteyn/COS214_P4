#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include "Farm.h"
#include <vector>

class ConcreteFarm : public Farm {
    public:
        ConcreteFarm();
        bool addFarmUnit(FarmUnit* farm);
        bool removeFarmUnit(FarmUnit* farm);
        Farm* getFarmUnit(int index);

        State* getSoilState() {return nullptr;};
        State* getCropState() {return nullptr;};
        void setSoilState(SoilState* soilState) {};
        void setCropState(CropState* cropState) {};

    protected:
        vector<FarmUnit*> farms;
};

#endif
