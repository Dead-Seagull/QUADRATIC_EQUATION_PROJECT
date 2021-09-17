
enum CODES {
    ZERO_ROOTS = 0,
    ONE_ROOT = 1,
    TWO_ROOTS = 2,
    INF_ROOTS = 3,
    NULL_PTR_ERR = 5,
    EQ_PTR_ERR = 6,
    INCORRECT_COEFF_ERR = 7,
};

int eq_solver(double a, double b, double c, double* x1, double* x2);

double lin_eq_solver(double b, double c);