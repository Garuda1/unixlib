/*
 * my_errs.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

/*
 * This function prints a null-terminated ASCII-encoded string of characters to stderr
 *
 */

#include  <unixlib.h>
#include  <sys/types.h>

ssize_t   my_errs(const char *str)
{
  ssize_t count = 0;

  if (!str)
    return FAILURE;

  while (*(str + count)) {
    if (my_errc(*(str + count)) == FAILURE)
      return FAILURE;
    ++count;
  }
  return count;
}
