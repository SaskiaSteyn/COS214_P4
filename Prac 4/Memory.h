#ifndef MEMORY_H
#define MEMORY_H

#include "Farmer.h"

class Memory {
    public:
        Memory* saveMemory();
        Memory* restoreMemory(Memory backedUpData);

    private:
        Farmer* farmer;
};

#endif
