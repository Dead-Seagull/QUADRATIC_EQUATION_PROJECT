#include <stdio.h>
#include "eq_solver.h"

void eq_test(double a, double b, double c, int test_num) {
    double x1 = 0, x2 = 0;
    printf("Test %d:\n", test_num);
    printf("-----------\n");
    switch(eq_solver(a, b, c, &x1, &x2)){
        case ZERO_ROOTS:
            printf("There are no roots!\n");
            break;
        case ONE_ROOT:
            printf("x = %lf\n", x1);
            break;
        case TWO_ROOTS:
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
            break;
        case INF_ROOTS:
            printf("Infinite number of roots!\n");
            break;
        case NULL_PTR_ERR:
            printf("Null pointer is found!\n");
            break;
        case EQ_PTR_ERR:
            printf("Pointers are equal!\n");
            break;
        case INCORRECT_COEFF_ERR:
            printf("Incorrect input!\n");
            break;
        default:
            printf("No info about this yet\n");
            break;
    }
    printf("-----------\n");
}

void unit_eq_test() {
    eq_test(1, 12, 1, 1);
    eq_test(-1, 11, 2, 2);
    eq_test(1, 10, 3, 3);
    eq_test(-1, 9, 4, 4);
    eq_test(1, 8, 5, 5);
    eq_test(-1, 7, 6, 6);
    eq_test(1, 6, 7, 7);
    eq_test(-1, 5, 8, 8);
    eq_test(1, 4, 9, 9);
    eq_test(-1, 3, 10, 10);
    eq_test(1, 2, 11, 11);
    eq_test(-1, 1, 12, 12);
}