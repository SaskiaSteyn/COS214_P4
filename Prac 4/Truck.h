#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

using namespace std;


class Truck {
    public:
//        friend class Farm;
        //startEngine would likely need a cropField here as param, BUT introducing that creates a circular dependency
        virtual void startEngine() = 0;
};

#endif
