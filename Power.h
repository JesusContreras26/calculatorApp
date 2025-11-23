// Header file for Power: defines a class that overrides execute() 
//to return the power of two inputs it inherits from the super class operation
#ifndef POWER_H
#define POWER_H

#include "Operation.h"

class Power : public Operation
{
    public:
        double execute(double a, double b) override;
};


#endif