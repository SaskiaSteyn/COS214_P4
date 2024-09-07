#ifndef GROWING_H
#define GROWING_H

#include "CropState.h"
#include "CropField.h"
#include "FullyGrown.h"

class Growing : public CropState {

    private:
        string name = "Growing";

    public:
        string getName();

        bool isReadyForHarvest();
        void growCrops(CropField* context);

};

#endif
