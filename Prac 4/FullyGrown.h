#ifndef FULLYGROWN_H
#define FULLYGROWN_H

#include "CropState.h"
#include "CropField.h"

class FullyGrown : public CropState {

    private:
        string name = "FullyGrown";

    public:
        void notify();
        string getName();

        bool isReadyForHarvest();
        void growCrops(CropField* context);

};

#endif
