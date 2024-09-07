#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "SoilState.h"
#include "CropState.h"

class CropField : public FarmUnit{
    private:
        SoilState* soilState;
        CropState* cropState;
        int yield; //the amount that has been planted

    public:
        virtual void harvestCrops() = 0;
        void summonRain();

        void setSoilState(SoilState* soilState);
        void setCropState(CropState* cropState);
};

#endif
