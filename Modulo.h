// Header file for Modulo: defines a class that overrides execute() 
//to return the Modulo of two inputs it inherits from the super class operation
#ifndef MODULO_H
#define MODULO_H

#include "Operation.h"

class Modulo: public Operation
{
    public:
        double execute(double a, double b) override;
};

#endif