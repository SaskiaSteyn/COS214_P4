#ifndef SEEDLING_H
#define SEEDLING_H

#include "CropState.h"
#include "CropField.h"
#include "Growing.h"

class Seedling : public CropState {

    private:
        string name = "Seedling";

    public:
        void notify();
        string getName();

        bool isReadyForHarvest();
        void growCrops(CropField* context);
};

#endif
