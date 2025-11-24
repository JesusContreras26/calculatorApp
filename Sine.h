// Header file for Sine: defines a class that overrides execute() 
//to return the Sine of one number inherits from the super class operation
#ifndef SINE_H
#define SINE_H
#include "Operation.h"

class Sine : public Operation
{
    public:
        double execute(double a, double b = 0) override;
};


#endif