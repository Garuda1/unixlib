/*
 * my_getn.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib-io.h>
#include <unixlib.h>

/*
 * this function parses a 32 bits integer
 * from the standard input and returns it.
 *
 */

int my_getn(void)
{
  char buf[12]; /* Maximum number of characters a 32 bits integer can use */

  my_gets(buf);
  return (my_atoi(buf));
}
