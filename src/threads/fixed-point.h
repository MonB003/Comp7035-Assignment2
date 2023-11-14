/* fixed-point.h */

#ifndef FIXED_POINT_H
#define FIXED_POINT_H

int int_to_fp(int n);
int fp_to_int_round_nearest(int x);
int divide_x_by_n(int x, int n);
int multiply_x_by_n(int x, int n);
int add_x_and_y(int x, int y);
int add_x_and_n(int x, int n);
int multiply_x_by_y(int x, int y);
int divide_x_by_y(int x, int y);

#endif /* fixed-point.h */
