#include "Sine.h"
#include <cmath>

// Implementation of Sine::execute:takes two inputs but one is already define as zero because only one would be needed
// and returns the number Sine using sin() function from cmath library
double Sine::execute(double a, double b){
    return sin(a);
}

