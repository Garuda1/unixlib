/*
 * my_strcpy.c
 *
 * Contributors:
 * - Domenico Luciani aka DLion <domenicoleoneluciani@gmail.com>
 *
 */

#include <unixlib.h>

/*
 * Copies the C string pointed by source into the array pointed by destination,
 * including the terminating null character (and stopping at that point).
 * To avoid overflows, the size of the array pointed by destination shall be long
 * enough to contain the same C string as source 
 * (including the terminating null character), and should not overlap in 
 * memory with source.
 *
 */

char *my_strcpy(char *dst, const char *src)
{
  char *d = dst;
  while (*src != '\0')
  {
	  *d++ = *src++;
  }
  *d = '\0';
  return (dst);
}
