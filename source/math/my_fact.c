/*
 * my_fact.c
 *
 * Licensed under GNU GNU v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include "mymaths.h"
#include <stdint.h>

uint32_t my_fact(const uint8_t x)
{
    uint32_t res;
    uint32_t i;

    res = 1;
    i = 1;
    while (i <= x)
        res *= (i++);
    return (res);
}