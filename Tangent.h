// Header file for Tangent: defines a class that overrides execute() 
//to return the Tangent of one number inherits from the super class operation
#ifndef TANGENT_H
#define TANGENT_H

#include "Operation.h"

class Tangent : public Operation
{
    public:
        double execute(double a, double b = 0) override;
};

#endif