#include "Memory.h"

void Memory::saveMemory(State *farmState) {
    this->farmState = farmState;
}

State *Memory::restoreMemory() {
    return this->farmState;
}

