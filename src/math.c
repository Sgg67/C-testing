#include "mymath.h"
#include <math.h>

// add method
int add(int a, int b) { return a + b; }
// subtract method
int subtract(int a, int b) { return a - b; }
// divide method
int divide(int a, int b){
    if(b == 0){
        return -1;
    } else {
        return a / b;
    }
}
// multiply method
int multiply(int a, int b){
    return a * b;
}

double sqrd(double a){
    double sq = sqrt(a);
    return sq;
}

