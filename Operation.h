//Abstract super class for calculator operations
//the execute function is virtual to enable polymorphism
//allowing each operation to have their own implementation
#ifndef OPERATION_H
#define OPERATION_H

class Operation {
public:
    virtual double execute(double a, double b = 0) = 0; // pure virtual
    virtual ~Operation() {}
};
#endif


