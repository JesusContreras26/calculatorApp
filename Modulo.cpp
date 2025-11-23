#include "Modulo.h"
#include <cmath>

// Implementation of Modulo::execute: takes two inputs but one is already define as zero because only one would be needed
// and returns the number modulo using fmod() function from cmath library
double Modulo::execute(double a, double b){
 return fmod(a,b);
}