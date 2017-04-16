/*
 * my_fmod.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include "mymaths.h"

long double my_fmod(const long double a, const long double b)
{
    long double res;

    res = a;
    while (res > b)
        res -= b;
    return (res);
}