#ifndef FARM_H
#define FARM_H

#include "Truck.h"
#include "State.h"
#include "CropState.h"
#include "SoilState.h"

#include <iostream>

using namespace std;

class Farm {
    private:
        Truck* truck;
        string name;

    public:
        Farm() {};
        virtual bool addFarmUnit(FarmUnit* farm) = 0;
        virtual bool removeFarmUnit(FarmUnit* farm) = 0;
        virtual Farm* getFarmUnit(int index) = 0;

        string getName();
        void setName(string farmName);


        virtual State* getSoilState() = 0;
        virtual State* getCropState() = 0;
        virtual void setStateSoil(SoilState* newSoilState) = 0;
        virtual void setStateCrop(CropState* newCropState) = 0;

};

#endif
