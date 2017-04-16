/*
 * my_tan.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

long double my_tan(const long double x)
{
	/* tan(x) = sinx(x)/cos(x) */
    return (my_sin(x) / my_cos(x));
}
