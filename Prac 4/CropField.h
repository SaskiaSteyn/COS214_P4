#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "SoilState.h"
#include "CropState.h"

#include "Seedling.h"
#include "Growing.h"
#include "FullyGrown.h"

#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"

class SoilState;
class CropState;

class CropField : public FarmUnit{
    private:
        State* soilState;
        State* cropState;
        int yield; //the amount that has been planted


    public:
        CropField();
        void summonRain();

        void setSoilState(State* soilState);
        void setCropState(State* cropState);

        bool getCropStatus();

        void buyTruck(Truck* truck) {};
        void sellTruck() {};
        void callTruck() {};
        void startEngine() {};
};

#endif
