/*
 * my_retstr.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>

/*
 * This function prints str to the
 * standard output and return ret.
 *
 */

int my_retstr(const int ret, const char *str)
{
  my_puts(str);
  return (ret);
}
