#ifndef PRAC_4_EXTRABARN_H
#define PRAC_4_EXTRABARN_H

<<<<<<< Updated upstream
#include "Farm.h"
=======
#include "State.h"
#include "SoilState.h"
#include "CropState.h"
>>>>>>> Stashed changes

class ExtraBarn {
    private:
        int extraCapacity;
    public:
        ExtraBarn();
        ExtraBarn(int capacity);

<<<<<<< Updated upstream
    void setStateSoil(SoilState* newSoilState) {};
    void setStateCrop(CropState* newCropState) {};
    State* getSoilState() {};
    State* getCropState() {};
    bool addFarmUnit(FarmUnit* farm) {};
    bool removeFarmUnit(FarmUnit* farm) {};
=======
        void setSoilState(State* soilState) {};
        void setCropState(State* cropState) {};
        SoilState* getSoilState() {return nullptr;};
        CropState* getCropState() {return nullptr;};
        bool getCropStatus() {return false;}
>>>>>>> Stashed changes
};


#endif //PRAC_4_EXTRABARN_H
