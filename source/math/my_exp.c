/*
 * my_exp.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

long double my_exp(const long double x)
{
    return (1.0 + x + (my_pow(x, 2)/2) + (my_pow(x, 3) / 6) + (my_pow(x, 4) / 24) + (my_pow(x, 5) / 120) + (my_pow(x, 6) / 720));
}
