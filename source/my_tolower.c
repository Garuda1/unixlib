/*
 * my_tolwer.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - dbradf
 *
 */

#include <unixlib.h>

char my_tolower(const char c) {
    if ((c >= 65) && (c <= 90)) {
        return c + 32;
    }

    return FAILURE;
}