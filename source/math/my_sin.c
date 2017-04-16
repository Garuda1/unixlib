/*
 * my_sin.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include "mymaths.h"

long double my_sin(long double x)
{
    /* sin(x) = cos(pi/2 - x) */
    return (my_cos((MY_PI/2) - x));
}