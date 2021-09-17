
#include <math.h>
#include "eq_solver.h"

int eq_solver(double a, double b, double c, double* x1, double* x2) {
    
    if ((x1 == 0) || (x2 == 0)) return NULL_PTR_ERR; 
    if (x1 == x2) return EQ_PTR_ERR;               
    if (a == 0) {
        if (b == 0) {
            return (c == 0) ? INF_ROOTS : ZERO_ROOTS;
        } else {
            *x1 = *x2 = lin_eq_solver(b, c);  
            return ONE_ROOT;
        }
    } else if (a != 0){
        double d = b*b - 4*a*c;
        if (d == 0) {
            *x1 = *x2 = -b / (2.0*a);
            return ONE_ROOT;
        } else if (d > 0) {
            double sqrt_d = sqrt(d);
            *x1 = (-b - sqrt_d) / (2.0*a);
            *x2 = (-b + sqrt_d) / (2.0*a);
            return TWO_ROOTS;
        } else {
            return ZERO_ROOTS;
        }
    }
}

double lin_eq_solver(double b, double c) {
    return -c / b;
}

