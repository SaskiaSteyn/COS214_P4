#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>
#include <map>

#include "Farm.h"

using namespace std;

class Iterator {
private:
    map<string, Farm*> farms;
    Farm * current;
public:
    Iterator(map<string, Farm*> farms);
    Farm * getFarm(string farmName);
    Farm * getStart();
    Farm * getEnd();
    Farm * getNext();
    Farm * getPrevious();
};

#endif