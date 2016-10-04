/*
 * my_puts.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

/*
 * This function prints a null-terminated ASCII-encoded string of characters to the standard output
 *
 */

#include <unixlib.h>
#include <sys/types.h>

ssize_t my_puts(const char *str)
{
  ssize_t count = 0;

  if (!str)
    return FAILURE;

  while (str[count] != CHAR_NULL) {
    if (my_putc(str[count]) == FAILURE)
      return FAILURE;
    ++count;
  }
  return count;
}
