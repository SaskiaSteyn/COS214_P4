#ifndef MOISTSOIL_H
#define MOISTSOIL_H

#include "SoilState.h"
#include "CropField.h"
#include "FruitfulSoil.h"

class FruitfulSoil;

class MoistSoil : public SoilState {
    private:
        string name = "MoistSoil";
        int productionMultiplier = 2;

    public:
        string getName();

        void harvestCrops(int yield, CropField* context);
        void rain(CropField* context);
};

#endif
