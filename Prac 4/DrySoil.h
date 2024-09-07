#ifndef DRYSOIL_H
#define DRYSOIL_H


#include "SoilState.h"
#include "CropField.h"
#include "MoistSoil.h"

class CropField;

class DrySoil : public SoilState {
    private:
    string name = "DrySoil";
    int productionMultiplier = 1;

    public:
        void notify();
        string getName();

        void harvestCrops(int yield);
        void rain(CropField* context);
    };

#endif
