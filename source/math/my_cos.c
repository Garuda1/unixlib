/*
 * my_cos.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

long double my_cos(long double x)
{
    /* This approximation is only accurate within [-pi/2, pi/2] */
    x = my_fmod(x, MY_2PI);
    if (x > (MY_PI/2))
        return (-my_cos(MY_PI - x)); /* cos(pi - x) = -cos(x) */
    else if (x < 0)
        return (my_cos(-x));

    return (1.0 - ((x * x) / 2) + (my_pow(x, 4) / 24) - (my_pow(x, 6) / 720));
}
