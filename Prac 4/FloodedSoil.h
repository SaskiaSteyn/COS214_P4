#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"
#include "CropField.h"

class FloodedSoil : public SoilState {
    private:
        string name = "FruitfulSoil";

    public:
        void notify();
        string getName();

        void harvestCrops();
        void rain(CropField* context);
};

#endif
