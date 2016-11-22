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
#include <sys/types.h>

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

double my_2d_dot_product(t_2dvector *, t_2dvector *);
double my_3d_dot_product(t_3dvector *, t_3dvector *);

uint64_t my_hash_BHAA(uint8_t *buf, size_t nb);

#endif
