#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

using namespace std;

class FarmUnit;

class Truck {
    private:
        string name;
    public:
        Truck(string name);
        friend class FarmUnit;
        //startEngine would likely need a cropField here as param, BUT introducing that creates a circular dependency
        virtual void startEngine(FarmUnit *farm) = 0;
        string getName();
};

#endif
