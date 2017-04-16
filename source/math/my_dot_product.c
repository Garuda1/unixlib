/*
 * my_dot_product.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

long double my_2d_dot_product(t_2dvector *v1, t_2dvector *v2)
{
  return (((v1->x) * (v2->x)) + ((v1->y) * (v2->y)));
}

long double my_3d_dot_product(t_3dvector *v1, t_3dvector *v2)
{
  return (((v1->x) * (v2->x)) + ((v1->y) * (v2->y)) + ((v1->z) * (v2->z)));
}
