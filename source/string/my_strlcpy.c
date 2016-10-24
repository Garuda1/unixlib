/*
 * my_strlcpy.c
 *
 * Contributors:
 * - SametSisartenep
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * Copy src to dst of size num. At most num-1 characters
 * will be copied. Always CHAR_NULL terminates.
 */

size_t
my_strlcpy(char *dst, const char *src, size_t num)
{
	char *d = dst;
        const char *s = src;
        size_t n = num;

        if (n != 0) {
                while (--n != 0) {
                        if ((*d++ = *s++) == CHAR_NULL)
                                break;
                }
        }

        if (n == 0) {
                if (num != 0)
                        *d = CHAR_NULL;
                while (*s++)
                        ;
        }

        return(s - src - 1);
}
