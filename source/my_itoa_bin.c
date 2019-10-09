/*
 * my_itoa_bin.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Softizo
 * 
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * This function converts integers into null-terminated
 * string in base 2.
 *
 */

char *my_itoa_bin(const int nb, char *str)
{
    int base = 2;
    int n = nb > 0 ? n : -n;

    int i = 0;
    while(n)
    {
        int r = n % base;

        if(r >= 10)
            str[i++] = 65 + (r - 10);
        else
            str[i++] = 48 + r;
        
        n /= base;
    }

    if(i == 0)
        str[i++] = '0';
    if(nb < 0)
        str[i++] = '-';
    str[i] = CHAR_NULL;

    return strrev(str);
}