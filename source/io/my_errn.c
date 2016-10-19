/*
 * my_errn.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>
#include <sys/types.h>

/*
 * This function prints nb
 * as ASCII to stderr
 *
 */

void my_errn(const int n)
{
  int nb;
  int mod;

  nb = n;
  mod = 0;
  if (nb < 10 && nb > -1)
    my_errc(nb + 48);
  if (nb < 0)
  {
    my_errc('-');
    nb *= -1;
    if (nb < 10 && nb > -1)
      my_errn(nb);
  }
  if (nb > 9)
  {
    mod = nb % 10;
    my_errn(nb / 10);
    my_errc(mod + 48);
  }
}
