#ifndef LOGBOOK_H
#define LOGBOOK_H

#include <list>

using namespace std;

#include "Memory.h"

class LogBook {
    private:
        list <Memory*> logbook;


    public:
        Memory* getMemories(int index);
        Memory* setMemories(int index, Memory* memories);
        Memory* addMemories(Memory* memory);
};

#endif
