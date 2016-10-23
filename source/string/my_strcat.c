/*
 * my_strcat.c
 *
 * Contributors:
 * - Mattia Antonino Di Gangi <mattiadigangi@gmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * Appends the string pointed to by src to the end of the string pointed to by dest.
 * dest should contain a C string, and should be large enough to contain the concatenated resulting string.
 * src is the string to be appended. This should not overlap the destination.
 */

 char *my_strcat(char *dest, const char *src)
 {
	 char* d = dest;
	 while (*d != CHAR_NULL)
	 {
		 d++;
	 }
	 while (*src != CHAR_NULL)
	 {
		 *d++ = *src++;

	 }
	 *d++ = CHAR_NULL;
	 return dest;
}
