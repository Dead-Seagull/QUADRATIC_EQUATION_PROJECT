#include <stdio.h>
#include <math.h>

#define INF_NUM 3

int eq_solver(double a, double b, double c, double* x1, double* x2);
void single_test();

int main() {

    single_test();

    return 0;

}

int eq_solver(double a, double b, double c, double* x1, double* x2) {
    if (a == 0) {
        if (b == 0) {
            return (c == 0) ? INF_NUM : 0;
        } else {
            *x1 = -c / b;
            return 1;
        }
    } else {
        double d = b*b - 4*a*c;
        if (d == 0) {
            *x1 = *x2 = -b / (2.0*a);
            return 1;
        } else if (d > 0) {
            double sqrt_d = sqrt(d);
            *x1 = (-b - sqrt_d) / (2.0*a);
            *x2 = (-b + sqrt_d) / (2.0*a);
            return 2;
        } else {
            return 0;
        }
    }
}

void single_test() {
    double a = 0, b = 0, c = 0; 
    double x1 = 0, x2 = 0;

    int num = 0;

    printf("This program solves quadratic equation (ax^2+bx+c=0). Put the a, b, c parametrs into the program...\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    num = eq_solver(a, b, c, &x1, &x2);

    switch (num)
    {
    case 0:
        printf("There are no roots\n");
        break;
    case 1:
        printf("There is 1 root: x = %.4f\n", x1);
        break;
    case 2: 
        printf("There are 2 roots: x1 = %.4f, x2 = %.4f\n", x1, x2);
        break;
    case INF_NUM:
        printf("There are an infinite amount of roots\n");
        break;
    default:
        printf("Impossible situation!");
        break;
    }
}
