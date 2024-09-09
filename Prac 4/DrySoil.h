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
        string getName();

<<<<<<< Updated upstream
        void harvestCrops(int yield, CropField* context);
        void rain(CropField* context);
=======
        void harvestCrops(int yield, ConcreteFarm* context);
        void rain(FarmUnit* context);
        int getProductionMultiplier();
>>>>>>> Stashed changes
    };

#endif
