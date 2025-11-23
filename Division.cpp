#include "Division.h"
#include <iostream>
using namespace std;

// Implementation of Division::execute: takes two inputs and returns their divition
double Division::execute(double a, double b){
    //we check if the user wants to divide by zero and returns an error message
    if (b == 0)
    {
        cout<<"Error: Division by zero not allowed!!!";
        return 0;
    }
    return a/b;
    
}