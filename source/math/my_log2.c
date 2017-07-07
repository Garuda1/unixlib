/*
 * my_log2.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

/*
 * log2(x) = log(x) / log(2)
 *
 * e a s y   a s   exp(0)-integral(0,pi,sin(x),x)-3
 */

long double my_log2(long double x)
{
  return (my_log(x)/MY_LOG2);
}
