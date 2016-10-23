/*
 * my_memchr.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>
#include <sys/types.h>

/*
 * This function returns a pointer to the first
 * iteration of c in str, or NULL if none was
 * found.
 *
 */

void *my_memchr(const void *str, const unsigned char c, const size_t n)
{
  size_t count;

  count = 0;
  while (count < n)
  {
    if (*((unsigned char *)str) == c)
      return ((void *)(((unsigned char *)str) + count));
    ++count;
  }
  return (MY_NULL);
}
