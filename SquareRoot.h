// Header file for Square Root: defines a class that overrides execute() 
//to return the Square Root of one number inherits from the super class operation
#ifndef SQUAREROOT_H
#define SQUAREROOT_H

#include "Operation.h"

class SquareRoot : public Operation
{
    public:
        double execute(double a, double b = 0);
};


#endif