/*
 * my_powf.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>
#include <stdint.h>

long double my_powf(const long double base, const long double exp)
{
    return (my_exp(exp*my_log(base)));
}
