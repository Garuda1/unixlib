/*
 * my_putn.c
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
 * as ASCII to stdout
 *
 */

void my_putn(const int n)
{
  int nb;
  int mod;

  nb = n;
  mod = 0;
  if (nb < 10 && nb > -1)
    my_putc(nb + 48);
  if (nb < 0)
  {
    my_putc('-');
    nb *= -1;
    if (nb < 10 && nb > -1)
      my_putn(nb);
  }
  if (nb > 9)
  {
    mod = nb % 10;
    my_putn(nb / 10);
    my_putc(mod + 48);
  }
}
