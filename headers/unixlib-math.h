/*
 * unixlib-math.h
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#ifndef _UNIXLIB_MATH_H
#define _UNIXLIB_MATH_H

#include <stdint.h>

#define MY_EULER ((long double)2.71828182846)
#define MY_PI    ((long double)3.14159265358979323846)
#define MY_2PI   ((long double)6.28318530718)

typedef struct s_2dvector t_2dvector;
struct s_2dvector
{
  double x;
  double y;
};

typedef struct s_3dvector t_3dvector;
struct s_3dvector
{
  double x;
  double y;
  double z;
};

long double my_2d_dot_product(t_2dvector *, t_2dvector *);
long double my_3d_dot_product(t_3dvector *, t_3dvector *);
long double my_fmod(const long double a, const long double b);
uint32_t my_fact(const uint8_t x);
long double my_pow(const long double base, const int32_t exp);
long double my_cos(const long double x);
long double my_sin(const long double x);
long double my_tan(const long double x);
long double my_exp(const long double x);

#endif
