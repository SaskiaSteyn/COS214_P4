#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"
#include "CropField.h"
#include "FloodedSoil.h"

class FloodedSoil;

class FruitfulSoil : public SoilState {

    private:
        string name = "FruitfulSoil";
        int productionMultiplier = 3;

    public:
        void notify();
        string getName();

        void harvestCrops(int yield, CropField* context);
        void rain(CropField* context);

};

#endif
