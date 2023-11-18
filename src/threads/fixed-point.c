#include <stdint.h>

#define FP_SHIFT_AMOUNT 14
#define FP_CONST (1 << FP_SHIFT_AMOUNT)

/* Convert an integer to a fixed-point number */
int int_to_fp(int n) {
    return n * FP_CONST;
}

/* Convert a fixed-point number to an integer (rounding to nearest) */
int fp_to_int_round_nearest(int x) {
    if (x >= 0) {
        return (x + FP_CONST / 2) / FP_CONST;
    } else {
        return (x - FP_CONST / 2) / FP_CONST;
    }
}

/* Divide a fixed-point number by an integer */
int divide_x_by_n(int x, int n) {
    return x / n;
}

/* Multiply a fixed-point number by an integer */
int multiply_x_by_n(int x, int n) {
    return x * n;
}

/* Add two fixed-point numbers */
int add_x_and_y(int x, int y) {
    return x + y;
}

/* Add a fixed-point number and an integer */
int add_x_and_n(int x, int n) {
    return x + int_to_fp(n);
}

/* Multiply two fixed-point numbers */
int multiply_x_by_y(int x, int y) {
    return ((int64_t) x) * y / FP_CONST;
}

/* Divide two fixed-point numbers */
int divide_x_by_y(int x, int y) {
    return ((int64_t) x) * FP_CONST / y;
}
