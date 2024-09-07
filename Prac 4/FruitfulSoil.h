#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"
#include "CropField.h"
#include "FloodedSoil.h"

class FruitfulSoil : public SoilState {

    private:
        string name = "FruitfulSoil";

    public:
        void notify();
        string getName();

        void harvestCrops();
        void rain(CropField* context);

};

#endif
