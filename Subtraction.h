// Header file for Addition: defines a class that overrides execute() 
//to return the subtraction of two inputs it inherits from the super class operation
#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "Operation.h"
class Subtraction : public Operation 
{
    public:
        double execute(double a, double b) override;
};

#endif
