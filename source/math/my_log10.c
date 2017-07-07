/*
 * my_log10.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

/*
 * log10(x) = log(x) / log(10)
 *
 * e a s y   a s   exp(0)-integral(0,pi,sin(x),x)-3
 */

long double my_log10(long double x)
{
  return (my_log(x)/MY_LOG10);
}
