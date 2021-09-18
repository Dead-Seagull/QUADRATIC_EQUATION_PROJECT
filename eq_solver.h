/// Codes, returned by eq_solver function
enum CODES {
    ZERO_ROOTS = 0,          ///< There are no real solutions
    ONE_ROOT = 1,            ///< One real solution
    TWO_ROOTS = 2,           ///< Two real solutions
    INF_ROOTS = 3,           ///< Infinitely many roots (a = b = c = 0 case)
    NULL_PTR_ERR = 5,        ///< function got null pointer as argument
    EQ_PTR_ERR = 6,          ///< function got same pointers
    INCORRECT_COEFF_ERR = 7, ///< function got incorrect coefficients
};

/*!
Solves quadratic equation ax^2 + bx + c = 0

\param[in]     a, b, c Coefficients
\param[out]    x1, x2 Pointers to the roots

\return Number of root or code of the error
*/
int eq_solver(double a, double b, double c, double* x1, double* x2);

/*!
Solves linear equation bx + c = 0

\param[in]     b, c Coefficients

\return Solution
*/
double lin_eq_solver(double b, double c);