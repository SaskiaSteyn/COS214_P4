#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>
#include <map>

#include "Farm.h"
#include "ConcreteFarm.h"

using namespace std;

class Iterator {
private:
    map<string, ConcreteFarm*> farms;
    map<string, ConcreteFarm*> ::iterator current;
public:
<<<<<<< Updated upstream
    Iterator(map<string, Farm*> farms);
    Farm * getFarm(string farmName);
    Farm * getCurrent();
    Farm * getStart();
    Farm * getEnd();
    Farm * getNext();
    Farm * getPrevious();
=======
//    Iterator(map<string, Farm*> farms);
    Iterator(map<string, ConcreteFarm*> farms);
    ConcreteFarm * getFarm(string farmName);
    ConcreteFarm * getCurrent();
    ConcreteFarm * getStart();
    ConcreteFarm * getEnd();
    ConcreteFarm * getNext();
    ConcreteFarm * getPrevious();
>>>>>>> Stashed changes
};

#endif