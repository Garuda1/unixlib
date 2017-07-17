/*
 * my_exp.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib-math.h>

/*
 * exp(2*k*x) = pow(exp(x), 2*k)
 *
 * This algorithm divides x by 2 (k times) until it is inferior to 1,
 * then computes exp(x) using a Taylor series, and squares the result
 * (k times) before returning it.
 *
 */

long double my_exp(long double x)
{
  long double res;
  long double xpow;
  uint16_t k;

  if (x<0.0)
    return (1.0/my_exp(-x));
  res = 0.0;
  xpow = 1.0;
  for (k=0; x>1.0; ++k)
    x/=2;
  for (uint8_t i=0; i<12; ++i)
  {
    res+=xpow/my_fact[i];
    xpow*=x;
  }
  for (uint8_t i=0; i<k; ++i)
    res*=res;
  return (res);
}
