#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"
#include "CropField.h"
#include "ConcreteFarm.h"

class FloodedSoil : public SoilState {
    private:
        string name = "FloodedSoil";
        int productionMultiplier = 0;

    public:
        string getName();

<<<<<<< Updated upstream
        void harvestCrops(int yield, CropField* context);
        void rain(CropField* context);
=======
        void harvestCrops(int yield, ConcreteFarm* context);
        void rain(FarmUnit* context);
        int getProductionMultiplier();

    protected:
>>>>>>> Stashed changes
};

#endif
