#include "Aggregate.h"

Iterator *Aggregate::createIterator(map<string, Farm *> farms) {
    return new Iterator(farms);
}