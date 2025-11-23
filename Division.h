// Header file for Division: defines a class that overrides execute() 
//to return the division of two inputs it inherits from the super class operation
#ifndef DIVISION_H
#define DIVISION_H

#include "Operation.h"
class Division : public Operation
{
    public:
        double execute(double a, double b) override;
};




#endif