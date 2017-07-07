/*
 * my_log.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-io.h>
#include <unixlib-math.h>

/*
 * log(2*k*x) = log(x) + log(2*k)
 *
 * This algorithm divides x by 2 (k times) until it is inferior to 1,
 * then computes log(x) using a Taylor series, and adds log(2)
 * (k times) before returning it.
 *
 */

long double my_log(long double x)
{
  long double res;
  uint16_t k;
  uint8_t sgn;

  if (!(x>0.0))
  {
    my_errs("Trying to compute negative or null logarithm, returning 0.0\n");
    return (0.0);
  }
  res = 0.0;
  sgn = 1;
  for (k=0; x>1.0; ++k)
    x/=2;
  for (uint8_t i=1; i<12; ++i)
  {
    sgn = sgn?-1:1; /* Efficient way to write pow(-1, i) */
    res += sgn*my_pow(x-1, i)/i;
  }
  for (uint8_t i=0; i<k; ++i)
    res += MY_LOG2;
  return (res);
}
