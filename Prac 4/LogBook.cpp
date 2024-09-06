#include "LogBook.h"

Memory *LogBook::getMemories(int index) {
    return this->logbook.at(index);
}

void LogBook::setMemory(int index, Memory *memories) {
    this->logbook[index] = memories;
}

void LogBook::addMemories(Memory *memory) {
    this->logbook.push_back(memory);
}
