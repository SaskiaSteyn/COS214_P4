#ifndef LOGBOOK_H
#define LOGBOOK_H

#include <vector>

using namespace std;

#include "Memory.h"

class LogBook {
    private:
        vector <Memory*> logbook;


    public:
        Memory* getMemories(int index);
        void setMemory(int index, Memory* memories);
        void addMemories(Memory* memory);
};

#endif
