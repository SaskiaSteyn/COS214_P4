#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"

class Barn : public FarmUnit {
    private:
        int totalCapacity;
        int currentCapacity;
        int threshold;
};

#endif
