/*
 * my_fdputs.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <sys/types.h>

ssize_t my_fdputs(const int fd, const char *str)
{
  ssize_t count;

  if (!str)
  	return FAILURE;

  count = 0;
  while (*(str + count) != CHAR_NULL)
  {
    if (my_fdputc(fd, *str + count) == FAILURE)
      return (FAILURE);
    ++count;
  }
  return (count);
}
