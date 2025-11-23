#include "Tangent.h"
#include<cmath>

// Implementation of Tangent::execute: takes two inputs but one is already define as zero because only one would be needed
// and returns the number tangent using tan() function from cmath library
double Tangent::execute(double a, double b){
    return tan(a);
}