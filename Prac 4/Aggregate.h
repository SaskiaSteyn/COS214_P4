#ifndef AGGREGATE_H
#define AGGREGATE_H

#include <iostream>
#include <string>
#include <map>

#include "Farm.h"
#include "Iterator.h"

using namespace std;

class Aggregate {
    private:
        map<string, Farm> farms;
    public:
        Iterator * createIterator(map<string, Farm *> farms);
};

#endif
