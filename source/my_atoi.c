/*
 * my_atoi.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - varshit97
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <stdio.h>
  
int my_atoi(const char *str)
{
    int value = 0;

    if (!str)
        return FAILURE;

    for(; *str != CHAR_NULL; str++)
        value = value * 10 + (*str) - '0';
    return value;
}
