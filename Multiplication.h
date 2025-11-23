// Header file for Multiplication: defines a class that overrides execute() 
//to return the multiplication of two inputs it inherits from the super class operation
#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "Operation.h"

class Multiplication : public Operation
{
    public:
        double execute(double a, double b) override;
};

#endif