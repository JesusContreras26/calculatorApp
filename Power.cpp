#include "Power.h"
#include <cmath>

// Implementation of Power::execute: takes two inputs but one is already define as zero because only one would be needed
// and returns the number power using pow() function from cmath library
double Power::execute(double a, double b){
    return pow(a, b);
}