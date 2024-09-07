#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"
#include "CropField.h"

class FloodedSoil : public SoilState {
    private:
        string name = "FloodedSoil";
        int productionMultiplier = 0;

    public:
        void notify();
        string getName();

        void harvestCrops(int yield, CropField* context);
        void rain(CropField* context);
};

#endif
