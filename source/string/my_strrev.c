/*
 * my_strrev.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Softizo
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * This function reverses the given string in place.
 */
char *my_strrev(char *str)
{
    char *p1, *p2;
    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}