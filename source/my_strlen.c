/*
 * my_strlen.c
 *
 * Licensed under GNU GPL
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

/*
 * This function returns the length of a null-terminated ASCII string,
 * or -1 if there was an error
 *
 */

#include  <unixlib.h>
#include  <sys/types.h>

ssize_t my_strlen(const char *str)
{
  ssize_t count = 0;
  
  if (!str)
    return FAILURE;

  while (*(str + count) != CHAR_NULL &&
         *(str + count) < (ssize_t)sizeof(str))
    ++count;
  if (count == sizeof(str))
    return FAILURE;
  return count;
}
