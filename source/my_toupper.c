/*
 * my_toupper.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - dbradf
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>

char my_toupper(const char c) 
{
    if (my_isupper(c)) {
        return c;
    }
    if (my_islower(c)) {
        return c - 'a' + 'A';
    }
    return FAILURE;
}
