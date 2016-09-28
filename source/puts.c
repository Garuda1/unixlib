/*
 * puts.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

/*
 * This function prints a null-terminated ASCII-encoded string of characters to the standard output
 *
 */

#include <unixlib.h>

int puts(const char *str)
{
  int count;

  count = 0;
  while (*(str + count))
    count += putc(*(str + count));
  return (count);
}
