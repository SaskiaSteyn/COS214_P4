#ifndef MOISTSOIL_H
#define MOISTSOIL_H

#include "SoilState.h"
#include "CropField.h"
#include "FruitfulSoil.h"

class MoistSoil : public SoilState {
private:
    string name = "MoistSoil";

public:
    void notify();
    string getName();

    void harvestCrops();
    void rain(CropField* context);
};

#endif
