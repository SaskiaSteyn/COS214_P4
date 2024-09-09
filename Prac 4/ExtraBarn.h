#ifndef PRAC_4_EXTRABARN_H
#define PRAC_4_EXTRABARN_H

#include "Farm.h"

class ExtraBarn: public Farm {
    private:
        int extraCapacity;
    public:
        ExtraBarn();
        ExtraBarn(int capacity);
};


#endif //PRAC_4_EXTRABARN_H
