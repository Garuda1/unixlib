/*
 * my_gets.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

#include <unixlib.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This function reads sizeof(str) bytes
 * from the standard input, null terminates
 * the sequence, and returns the number of
 * bytes read.
 *
 */

ssize_t my_gets(char *str)
{
  ssize_t count;

  count = 0;
  while (count < (ssize_t)sizeof(str) - 1)
  {
    if ((str[count] = my_getc()) == FAILURE)
      return (FAILURE);
    ++count;
  }
  str[count + 1] = CHAR_NULL;
  return (count);
}
