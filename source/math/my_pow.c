/*
 * my_pow.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include "mymaths.h"
#include <stdint.h>

long double my_pow(const long double base, const int32_t exp)
{
    int32_t p;
    long double res;

    p = 1;
    res = 1;
    if (exp < 0)
        return (1 / my_pow(base, -exp));
    if (exp == 0)
        return (1);
    while (p <= exp)
    {
        res *= base;
        ++p;
    }
    return (res);
}