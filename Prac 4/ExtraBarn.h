#ifndef PRAC_4_EXTRABARN_H
#define PRAC_4_EXTRABARN_H

#include "Farm.h"

class ExtraBarn {
    private:
        int extraCapacity;
    public:
        ExtraBarn();
        ExtraBarn(int capacity);

    void setStateSoil(SoilState* newSoilState) {};
    void setStateCrop(CropState* newCropState) {};
    State* getSoilState() {};
    State* getCropState() {};
    bool addFarmUnit(FarmUnit* farm) {};
    bool removeFarmUnit(FarmUnit* farm) {};
};


#endif //PRAC_4_EXTRABARN_H
