#ifndef AGGREGATE_H
#define AGGREGATE_H

#include <iostream>

#include <map>
#include <string>

#include "Iterator.h"
#include "Farm.h"
#include "ConcreteFarm.h"

using namespace std;

class Aggregate {
    public:
        Iterator * createIterator(map<string, ConcreteFarm *> farms);
};

#endif
