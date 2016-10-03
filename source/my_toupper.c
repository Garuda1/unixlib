/*
 * my_toupper.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - dbradf
 *
 */

#include <unixlib.h>

char my_toupper(const char c) {
    if ((c >= 97) && (c <= 122)) {
        return c - 32;
    }

    return FAILURE;
}