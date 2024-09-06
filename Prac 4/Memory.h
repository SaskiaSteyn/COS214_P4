#ifndef MEMORY_H
#define MEMORY_H

#include "Farm.h"
#include "Farmer.h"

class Memory {
    public:
    //once a memory is made, it gets stored in logbook
        Memory* saveMemory();
        Memory* restoreMemory(Memory backedUpData);

    private:
        Farm* farmer;
};

#endif
