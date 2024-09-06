#ifndef MEMORY_H
#define MEMORY_H

#include "State.h"

class Memory {
    private:
       State* farmState;

    public:
    //once a memory is made, it gets stored in logbook
        void saveMemory(State* farmState);
        State* restoreMemory();
};

#endif
