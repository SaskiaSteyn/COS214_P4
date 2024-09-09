#include "Aggregate.h"

Iterator *Aggregate::createIterator(map<string, ConcreteFarm *> farms) {
    return new Iterator(farms);
}