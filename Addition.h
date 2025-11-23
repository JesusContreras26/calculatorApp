// Header file for Addition: defines a class that overrides execute() 
//to return the sum of two inputs it inherits from the super class operation
#ifndef ADDITION_H
#define ADDITION_H

#include "Operation.h"

class Addition : public Operation
{
    public:
        double execute(double a, double b) override;
};

#endif
