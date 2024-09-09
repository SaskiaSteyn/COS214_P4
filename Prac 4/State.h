#ifndef STATE_H
#define STATE_H

#include <iostream>

<<<<<<< Updated upstream
=======
class ConcreteFarm;
class FarmUnit;
//class CropField;

>>>>>>> Stashed changes
using namespace std;

class State {
    private:
        int productionMultiplier;
        int stateName;

    public:
<<<<<<< Updated upstream
        virtual string getName() = 0;
=======
//        friend class CropField;
        friend class ConcreteFarm;
        friend class FarmUnit;

        virtual string getName() = 0;
        // Soil Functions
        virtual void harvestCrops(int yield, ConcreteFarm* context) = 0;
        virtual void rain(FarmUnit* context) = 0;

        // Crop Functions
        virtual bool isReadyForHarvest() = 0;
        virtual void growCrops(FarmUnit* context) = 0;

        virtual int getProductionMultiplier() = 0;
>>>>>>> Stashed changes
};

#endif
