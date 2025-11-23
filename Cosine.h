// Header file for Cosine: defines a class that overrides execute() 
//to return the cosine of one number inherits from the super class operation
#ifndef COSINE_H
#define COSINE_H

#include "Operation.h"
class Cosine : public Operation
{
    public:
        double execute(double a, double b = 0) override;
};

#endif