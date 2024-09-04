#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h.h"

class Barn : FarmUnit {
    private:
        int totalCapacity;
        int currentCapacity;
        int threshold;
};

#endif
