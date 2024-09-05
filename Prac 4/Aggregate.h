#ifndef AGGREGATE_H
#define AGGREGATE_H

#include <iostream>
#include <map>
#include <string>

#include "Iterator.h"
#include "Farm.h"

using namespace std;

class Aggregate {
    private:
        Iterator * iterator;
    public:
        Iterator * createIterator(map<string, Farm*> farms);
};

#endif
