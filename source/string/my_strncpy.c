/*
 * my_strncpy.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - makomi <unixlib@makomi.net>
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * Copies the first 'num' characters from source to destination.
 *
 * If the end of the string pointed to by source (signaled by the null-character)
 * is reached before 'num' characters have been copied, destination is padded
 * with zeros until 'num' characters have been written to it.
 *
 * If the string pointed to by source is equal to or longer than 'num',
 * no null-character is appended at the end of destination.
 *
 */

char *my_strncpy(char *dst, const char *src, size_t num)
{
  char *dst_string = dst;
  size_t dst_num = 0;        /* number of characters written to destination */

  /* copy the string */
  while (*src != CHAR_NULL && dst_num < num)
  {
    *dst++ = *src++;
    dst_num++;
  }

  /* padd destination with null-characters */
  while (dst_num < num)
  {
    *dst++ = CHAR_NULL;
    dst_num++;
  }

  return (dst_string);
}
