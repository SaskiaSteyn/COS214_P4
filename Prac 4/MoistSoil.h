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
